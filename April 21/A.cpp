#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int sum = 0;
    for (auto it: mp)
    {
        sum += (it.second / 3);  
    }
    cout << sum << endl;
    
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