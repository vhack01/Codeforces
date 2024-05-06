#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;
    if (n < 3)
    {
        cout << "0" << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int a = str[i];
        int b = str[i + 1];
        int c = str[i + 2];

        if (a == 'm' && b == 'a' && c == 'p' || a == 'p' && b == 'i' && c == 'e')
        {
            ans++;
            i += 2;
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