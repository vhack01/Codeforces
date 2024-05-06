#include <bits/stdc++.h>
using namespace std;

void make(bool SF, int m)
{
    for (int i = 0; i < 2; i++)
    {
        bool flag = SF;
        for (int j = 0; j < (m / 2); j++)
        {
            if (flag)
            {
                cout << "##";
            }
            else
            {
                cout << "..";
            }
            flag = !flag;
        }
        cout << endl;
    }
}

void solve()
{
    int n;
    cin >> n;
    int m = 2 * n;

    bool flag = true;
    for (int i = 0; i < (m / 2); i++)
    {
        make(flag, m);
        flag = !flag;
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