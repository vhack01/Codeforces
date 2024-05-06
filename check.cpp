#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n = 6;
    int arr[] = {0, 5, -8, 1, 3, 2};
    int mini = INT_MAX, smini = INT_MAX; 
    for (int i = 0; i < n; i++)
    {
        if(arr[i] < mini) {
            smini = mini;
            mini = arr[i];
        }
        else if(arr[i] < smini)
            smini = arr[i];
    }
    cout << "mini: " << mini << ", smini:" << smini << endl;
}
int main()
{
    solve();
    return 0;
}