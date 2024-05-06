#include <bits/stdc++.h>
using namespace std;

bool helper(int n, int index, vector<int> &arr)
{
    if (n == 1)
        return true;

    if (index < 0 || n < arr[index])
        return false;

    bool left = false, right = false;
    if (n % arr[index] == 0)
    {
        left = helper(n / arr[index], index, arr);
    }
    if (!left &&)
    {
        right = helper(n, index - 1, arr);
    }
    return left | right;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(11);
    int MAX = 1e5;
    for (int i = 0; i < MAX; i++)
    {
        int a = arr[i] * 10;
        int b = arr[i] * 10 + 1;
        arr.push_back(a);
        arr.push_back(b);
    }
    reverse(arr.begin(), arr.end());
    int len = arr.size();
    bool res = helper(n, len - 1, arr);
    if (res)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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