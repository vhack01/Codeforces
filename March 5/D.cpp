#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, c;
    cin >> n >> c;

    set<long long int> s;
    for (int i = 0; i < n; i++)
    {
        long long int num;
        cin >> num;
        s.insert(num);
    }

    long long int ans = 0;
    for (int i = 0; i <= c; i++)
    {
        for (int j = i; j <= c; j++)
        {
            if (i <= j && s.find(i + j) == s.end() && s.find(j - i) == s.end())
            {
                ans++;
            }
        }
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