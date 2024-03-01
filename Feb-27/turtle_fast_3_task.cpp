#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        sum += num;
        arr.push_back(num);
    }

    if (sum % 3 == 0)
    {
        cout << 0 << endl;
    }
    else if (sum % 3 == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        // mod = 1
        for (int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 3 == 0)
            {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
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