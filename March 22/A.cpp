#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n;
    cin >> n;
    vector<long long int> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());
    int mid = 0;
    if (n % 2 != 0)
    {
        mid = (n / 2);
    }
    else
    {
        mid = (n / 2) - 1;
    }
    int count = 0;
    for (int i = mid + 1; i < n; i++)
    {
        if (arr[i] == arr[mid])
        {
            count++;
        }
    }
    cout << (count + 1) << endl;
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