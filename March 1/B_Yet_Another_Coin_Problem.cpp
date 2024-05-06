#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    int values[5] = {1, 3, 6, 10, 15};

    int coins = 0;
    int ind = 4;
    while (n != 0)
    {
        coins += (n / values[ind]);
        n %= values[ind--];
    }
    cout << coins << endl;
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