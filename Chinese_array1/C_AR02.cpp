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
    int a[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    for (int i = 5; i > 0; i--)
        cout << a[i] << " ";
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