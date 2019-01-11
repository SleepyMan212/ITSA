/*
    status:ac
*/
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int c;

    while (a != 0)
    {
        c = a;
        a = b % a;
        b = c;
    }

    return b;
}
int main(int argc, char const *argv[])
{
    int nc;
    cin >> nc;
    int t;
    while (nc--)
    {
        int mx = -1e9, mn = 1e9;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mx = max(mx, t);
            mn = min(mn, t);
        }
        cout << gcd(mn, mx) << endl;
    }
    return 0;
}
