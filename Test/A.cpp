#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m;
    cin >> m;
    string str;
    cin >> str;

    vector<vector<char>> arr(m, vector<char>(2));
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < str.size(); j++)
        {
            if(str[j] == arr[i][0]){
                str[j] = arr[i][1];
            }
            
            else if(str[j] == arr[i][1]){
                str[j] = arr[i][0];
            }
        }
    }
    cout << str << endl;
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}