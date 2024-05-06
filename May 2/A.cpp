#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
    // Find Minimum of a and b 
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 

    return result; 
} 
void solve()
{
    int x;
    cin >> x;
    int ans = INT_MIN, index = -1;
    for (int y = 1; y < x; y++)
    {
        int gd = __gcd(x, y) + y;
        if(gd > ans) {
            index = y;
            ans = gd;
        }
    }

    cout << index << endl;
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