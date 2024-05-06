#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int m = str.size();
    int start = 0, end = m - 1;
    while (start <= end && str[start] == str[end])
    {
        start++;
        end--;
    }

    if (str[start] <= str[end])
    {
        cout << str << endl;
    }
    else
    {
        string temp = str;
        reverse(str.begin(), str.end());
        str += temp;
        cout << str << endl;
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