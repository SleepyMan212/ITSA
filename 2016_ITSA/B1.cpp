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
    int n, Q;
    cin >> n >> Q;
    int sucess = 0;
    int a, t = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        a %= Q;
        t *= a;
        if (t % Q == 1 && !sucess)
        {
            sucess = 1;
            cout << i + 1 << endl;
            // break;
        }
        t %= Q;
    }
    if (!sucess)
        cout << "-1" << endl;
}
int main()
{
    int nc;
    cin >> nc;
    while (nc--)
    {
        init();
        sol();
    }
    return 0;
}