#include <bits/stdc++.h>
using namespace std;

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
    sort(arr.begin(), arr.end());

    set<int> alice;
    for (int i = 0; i < n; i += 2)
    {
        alice.insert(arr[i]);
    }

    int num = 0;
    for (auto it : alice)
    {
        if (it == num)
        {
            num++;
        }
        else
        {
            break;
        }
    }

    cout << num << endl;
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