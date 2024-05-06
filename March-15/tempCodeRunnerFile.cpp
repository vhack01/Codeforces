#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }

    string ans = "";
    for (int i = 0; i < n; i += 2)
    {
        ans += "AA";
        if (i + 2 < n)
            ans += "B";
    }

    cout << "YES" << endl;
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