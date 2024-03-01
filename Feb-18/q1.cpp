#include <bits/stdc++.h>
using namespace std;

int helper(string str)
{
    int n = str.size();
    vector<int> dp(n, 0);
    dp[0] = 0;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == '*')
        {
            if (str[i - 1] == '*')
                break;
            dp[i] = 0;
        }
        else
        {
            int left = dp[i - 1];
            int right = 0;
            if (i > 1)
                right = dp[i - 2];

            dp[i] = max(left, right) + (str[i] == '@' ? 1 : 0);
            ans = max(ans, dp[i]);
        }
    }

    return ans;
}

int maxCoin(string str)
{
    int n = str.size();
    if (n == 0)
        return 0;
    return helper(str);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string arr;

        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            arr.push_back(ch);
        }

        cout << maxCoin(arr) << endl;
    }
}
