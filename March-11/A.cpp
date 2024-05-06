#include <bits/stdc++.h>
using namespace std;

int helper(int i, int j, int &k, vector<int> &a, vector<int> &b, set<pair<int, int>> &s, vector<vector<int>> &dp)
{
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (a[i] + b[j] <= k)
    {
        s.insert({i, j});
        return dp[i][j] = helper(i - 1, j, k, a, b, s, dp) + helper(i, j - 1, k, a, b, s, dp) + 1;
    }
    else
    {
        return dp[i][j] = helper(i - 1, j, k, a, b, s, dp) + helper(i, j - 1, k, a, b, s, dp);
    }
}

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num < k)
            a.push_back(num);
    }
    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        if (num < k)
            b.push_back(num);
    }

    int x = a.size();
    int y = b.size();
    set<pair<int, int>> s;
    vector<vector<int>> dp(x, vector<int>(y, -1));
    helper(x - 1, y - 1, k, a, b, s, dp);
    cout << s.size() << endl;
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