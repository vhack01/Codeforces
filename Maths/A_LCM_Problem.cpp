#include <bits/stdc++.h>
using namespace std;
int LCM(int a, int b)
{
    int s = max(a, b);
    for (int i = s; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;
        }
    }
    return -1;
}
void solve()
{
    int l, r;
    cin >> l >> r;

    if (l == 0 || r == 0)
        cout << "-1" << endl;

    int s = min(l, r);
    int e = max(l, r);

    for (int i = s; i <= e; i++)
    {
        for (int j = s; j <= e; i++)
        {
        }
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
        solve();
    return 0;
}