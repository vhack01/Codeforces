#include <bits/stdc++.h>
using namespace std;

int helper(int i, int j, vector<vector<int>> mat)
{
    int n = mat.size();
    int m = mat[0].size();

    if (j >= m)
        return 0;

    if (i == n - 1 && j == m - 1)
    {
        return 1;
    }

    // upward
    int up = helper((i + (n - 1)) % n, j, mat);

    // downward
    int dn = INT_MAX;
    if (mat[(i + 1) % n][j] != 1 && mat[(i + 2) % n][j] != 1)
    {
        helper((i + 1) % n, j, mat);
    }

    // right
    int rt = INT_MAX;
    if (mat[(i + 1) % n][(j + 1) % n] != 1)
    {
        helper(i, j + 1, mat);
    }

    return min(up, dn, rt);
}

void solve()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> mat;

    for (int i = 0; i < r; i++)
    {
        vector<int> arr;
        for (int j = 0; j < c; j++)
        {
            int num;
            cin >> num;
            arr.push_back(num);
        }
        mat.push_back(arr);
    }

    cout << helper(0, 0, mat);
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