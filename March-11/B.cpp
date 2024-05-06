#include <bits/stdc++.h>
using namespace std;

bool helper(int n, vector<int> &arr)
{
    if (n == 0)
    {
        for (int a : arr)
            if (a != 0)
                return false;
        return true;
    }

    bool take = false;
    if ((arr[n] - 2) >= 0 && (arr[n - 1] - 1) >= 0 && (arr[n + 1] - 1) >= 0)
    {
        arr[n] = arr[n] - 2;
        arr[n - 1] = arr[n - 1] - 1;
        arr[n + 1] = arr[n + 1] - 1;
        take = helper(n, arr);
    }
    bool nottake = false;
    if (!take)
    {
        nottake = helper(n - 1, arr);
    }
    return take or nottake;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    bool res = helper(n - 2, arr);
    if (res)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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