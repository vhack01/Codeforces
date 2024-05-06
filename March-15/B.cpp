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

    bool flag = true;
    int prev = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (prev > arr[i])
        {
            flag = false;
            break;
        }
        else
        {
            int m = arr[i];
            int x = m / 10;
            int y = m % 10;

            if (prev <= x && x <= y)
            {
                prev = y;
            }
            else
            {
                prev = arr[i];
            }
        }
    }

    if (!flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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