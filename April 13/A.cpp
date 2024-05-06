#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> q(m);
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }

    for (int i = 0; i < m; i++)
    {
        if (q[i] >= arr[0])
        {
            cout << (arr[0] - 1) << " ";
        }
        else
        {
            cout << q[i] << " ";
        }
    }
    cout << endl;
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