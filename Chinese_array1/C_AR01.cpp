/*
    status: AC
*/
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;
void init()
{
}
void sol()
{
    int n;
    // cin >> n;
    int a[100];
    int t = 0;
    while (cin >> a[t])
    {

        // cout << a[t] << endl;
        t++;
    }
    for (int i = t - 1; i > 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << a[0] << endl;
}
int main()
{
    int nc;
    // cin >> nc;
    // while (nc--)
    // {
    init();
    sol();
    // }
    return 0;
}