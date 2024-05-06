#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k == 0)
    {
        cout << n << endl;
        return;
    }

    if (k >= n - 1)
    {
        cout << 1 << endl;
        return;
    }
    else
    {
        cout << n << endl;
        return;
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