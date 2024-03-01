#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, l;
    cin >> a >> b >> l;
    int cnt = 0;
    int n = 0, m = 0;
    int z = l;
    while (z > 0)
    {
        z /= a;
        n++;
    }
    z = l;
    while (z > 0)
    {
        z /= b;
        m++;
    }
    set<int> st;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            int x = pow(a, i);
            int y = pow(b, j);
            if (x > l || y > l)
                continue;
            if (l % (x * y) == 0)
                st.insert(l / (x * y));
        }
    }
    cout << st.size() << endl;
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