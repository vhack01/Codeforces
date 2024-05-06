#include <bits/stdc++.h>
using namespace std;
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    bool flag = false;
    for (int i = 0; i < (t / 2); i++)
    {
        if (flag)
        {
            cout << "YES" << endl;
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
            cout << "NO" << endl;
        }
        flag = !flag;
    }

    return 0;
}