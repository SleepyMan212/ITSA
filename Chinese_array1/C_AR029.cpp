/*
    status: wa
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
    string s;
    getline(cin, s);
    char a[50][50];
    int t = 0;
    int m = sqrt(s.size());
    // for (int i = 0; i < m; i++)
    //     for (int j = 0; j < m; j++)
    //         a[i][j] = ' ';
    if (s.size() != m * m)
        m++;
    // cout << "m=" << m << endl;
    for (int i = 0; i < s.size(); i++)
    {
        a[i / m][i % m] = s[i];
    }
    // char tmp = ' ';
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[j][i];
            // if (tmp == a[i][j])
            //     cout << '\b';
            // tmp = a[j][i];
        }
    }
    cout << endl;
}
int main()
{
    init();
    sol();
    return 0;
}