#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    for (int i = 1; i <= 2 * n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < 2 * k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 2 * k; i < 2 * (2 * k); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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