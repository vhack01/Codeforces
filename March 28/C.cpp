#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string t;
    cin >> t;
    int hrs = stoi(t.substr(0, 2));
    string mins = t.substr(3, 2);
    if (hrs >= 0 && hrs <= 11)
    {
        if (hrs == 0)
        {
            cout << "12:" << mins << " AM" << endl;
        }
        else
            cout << t << " AM" << endl;
    }
    else
    {
        if (hrs == 12)
        {
            cout << t << " PM" << endl;
        }
        if (hrs >= 13 && hrs <= 23)
        {
            int nhrs = hrs - 12;
            if (nhrs < 10)
            {
                cout << "0" << nhrs << ":" << mins << " PM" << endl;
            }
            else
            {
                cout << nhrs << ":" << mins << " PM" << endl;
            }
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
    {
        solve();
    }
    return 0;
}