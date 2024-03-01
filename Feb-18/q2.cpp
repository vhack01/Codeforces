#include <bits/stdc++.h>
using namespace std;

auto mult(vector<int> &arr, int s, int e)
{
    auto ans = 1;
    for (auto i = s; i <= e; i++)
    {
        ans = (ans * arr[i]) % (int)(1e9 + 7);
    }
    return ans;
}

void remainders(int n, int m, vector<int> &arr, string str)
{
    if (str.size() != n)
        return;
    int s = 0, e = n - 1;
    int i = 0;
    while (s <= e)
    {
        auto product = mult(arr, s, e);
        cout << (product % m) << " ";
        if (str[i] == 'L')
        {
            s++;
        }
        else
        {
            e--;
        }
        i++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            arr[i] = num;
        }

        string str;
        cin >> str;
        remainders(n, m, arr, str);
        cout << endl;
    }
}