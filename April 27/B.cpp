#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int MOD = 1e9 + 7;
    string str;
    cin >> str;
    int n = str.size();

    int s = 0, e = 1;
    int ans = 0; 
    while (e < n) 
    {
        if(str[e] == '0') {
            while (s < e && str[s] != '1')
            {
                s++;
            }
            if(str[s] == '1'){
                ans = (ans + (e - s + 1)) % MOD;
                str[s] = '0';
                str[e] = '1';
            }
        }
        e++;
    }
    cout << ans << endl;
    
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