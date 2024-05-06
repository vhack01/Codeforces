#include <bits/stdc++.h>
using namespace std;

static bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr.push_back({num, i});
    }
    int target;
    cin >> target;

    sort(arr.begin(), arr.end(), comp);

    int p1 = 0, p2 = n - 1;
    while (p1 < p2)
    {
        if (arr[p1].first + arr[p2].first == target)
        {
            cout << "[" << p1 << ", " << p2 << "]" << endl;
            break;
        }
        else if (arr[p1].first + arr[p2].first > target)
        {
            p2--;
        }
        else
        {
            p1++;
        }
    }
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}