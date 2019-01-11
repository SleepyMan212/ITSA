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
    int a, b, c, d;
    char t;
    while (cin >> a >> t >> b >> c >> t >> d)
    {
        if (!a && !b && !c && !d)
            break;
        a *= d;
        c *= b;
        long long x = a + c;
        long long y = b * d;

        int mx = max(x, y);
        int mn = min(x, y);
        cout << x / gcd(mn, mx) << "/" << y / gcd(mn, mx) << endl;
    }
    return 0;
}
