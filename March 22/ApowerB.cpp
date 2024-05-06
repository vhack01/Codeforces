#include <bits/stdc++.h>
using namespace std;

int evenPower(int a, int b, int n)
{
    if (b == 1)
        return a % n;
    a = (a % n * a % n) % n;
    b /= 2;
    return evenPower(a, b, n);
}

int main()
{
    system("cls");

    int a, b;
    cin >> a >> b;
    int n = 1e9 + 7;
    if ((b ^ 1) == 1)
    {
        cout << evenPower(a, b, n) << endl;
    }
    else
    {
        b -= 1;
        cout << a * evenPower(a, b, n) << endl;
    }
}