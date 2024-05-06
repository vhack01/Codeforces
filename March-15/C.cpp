#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<char>> grid(2);
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        grid[0].push_back(ch);
    }
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        grid[1].push_back(ch);
    }
    int r = 2;
    int c = n;
    if (grid[1][n - 2] == '<')
    {
        cout << "NO" << endl;
        return;
    }

    int i = 1, j = n - 2;
    bool flag = true;
    while (j != 0)
    {
        if (grid[i][j] == '>')
        {
            j -= 2;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
        return;
    }

    i = 0;
    j = n - 3;
    flag = true;
    while (j != 1)
    {
        if (grid[i][j] == '>')
        {
            j -= 2;
        }
        else
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
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