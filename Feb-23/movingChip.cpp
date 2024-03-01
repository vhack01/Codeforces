#include <bits/stdc++.h>
using namespace std;

int minOperation(vector<int> &arr)
{
    int n = arr.size();
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            start = i;
            break;
        }
    }

    int end = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 1)
        {
            end = i;
            break;
        }
    }

    int ans = 0;
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == 0)
            ans++;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
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

        cout << minOperation(arr) << endl;
    }
}