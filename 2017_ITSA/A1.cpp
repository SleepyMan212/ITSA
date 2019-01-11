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
    string s;
    cin >> s;
    bool success = true;
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            success = false;
            break;
        }
    }
    if (success)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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