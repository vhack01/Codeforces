#include <bits/stdc++.h>
using namespace std;


void shift(int index, vector<int> &arr) {
    
    for (int i = arr.size() - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> exp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> exp[i];
    }
    
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > exp[i]) {
            ans++;
            shift(i, arr);
            arr[i] = exp[i];
        }
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