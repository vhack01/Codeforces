#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(n == 2) {
        cout << 2 << endl;
    }
    else {
        for (int i = 1; i <= n; i++)
        {
            if(i == arr[arr[i - 1] - 1]) {
                cout << 2 << endl;
                return;
            }
        }
        cout << 3 << endl;
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