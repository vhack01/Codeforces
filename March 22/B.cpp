#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

int maxSubArray(vector<int> &arr)
{
    int n = arr.size();
    int mx = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
            sum = 0;
        mx = max(mx, sum);
    }
    return max(mx, 0);
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += arr[i];
    }

    int mx = maxSubArray(arr);
    for (int i = 0; i < k; i++)
    {
        ans = (ans + mx + mod) % mod;
        mx = (mx * 2) % mod;
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
