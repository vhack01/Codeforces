#include <bits/stdc++.h>
using namespace std;


bool isLost(string str) {
    int n = str.size();
    int d = 0, u = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == 'U') u++;
        else d++;
    }
    if(n == d) return true;
    if(n % 2 == 0 && u == n) return true;
    return false;
}

int findIndex(string &str) {
    int n = str.size();
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if(str[i] == 'U' ) {
            int l = i - 1;
            int r = i + 1;
            if(i == 0) {
                l =  n - 1;
                r = 1;
            }
            else if(i == n - 1) {
                l = n - 2;
                r = 0;
            }

            if(str[l] == 'U' && str[r] == 'U') {
                return i;
            }
            else if(str[l] == 'D' && str[r] == 'U' || str[l] == 'U' && str[r] == 'D') {
                index = i;
            }
            else{
                if(index == -1) index = i;
            }
        }
    }

    return index;    
}

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    // 0->Alice
    // 1->Bob
    int player = 0;
    while(str.size() > 0) {
        int n = str.size();

        if(isLost(str)) {
            string dec = (player == 0) ? "NO" : "Yes";
            cout << dec << endl;
            return;
        }  

        if(n <= 2){
            string dec = (player == 0) ? "YES" : "NO";
            cout << dec << endl;
            return; 
        }

        int i = findIndex(str);
        // cout << "i: " << i << ", ";
        int l = i - 1;
        int r = i + 1;
        if(i == 0) {
            l = n - 1;
            r = 1;
        }
        if(i == n - 1) {
            l = n - 2;
            r = 0;
        }

        str[l] = str[l] == 'U' ? 'D' : 'U';
        str[r] = str[r] == 'U' ? 'D' : 'U';                

        string left = str.substr(0, i);
        string right = "";
        if(i < n - 1)
            right = str.substr(i + 1);
        
        str = left + right;
        // cout << "Str: " << str << endl;
        player = 1 - player;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}