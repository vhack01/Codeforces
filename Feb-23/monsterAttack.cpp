#include <bits/stdc++.h>
using namespace std;

vector<pair<long, long>> createMap(int n, vector<int> &health, vector<int> &pos)
{
    // Nlog(N)
    map<long, long> mp;
    for (int i = 0; i < n; i++)
    {
        if (pos[i] < 0)
        {
            mp[(-pos[i])] += health[i];
        }
        else
        {
            mp[(pos[i])] += health[i];
        }
    }

    vector<pair<long, long>> mon;
    for (auto it : mp)
        mon.push_back({it.first, it.second});

    return mon;
}

void solve()
{
    int N, B;
    cin >> N >> B;

    vector<int> health;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        health.push_back(num);
    }
    vector<int> pos;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        pos.push_back(num);
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
}