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
    vector<int> num;
    int temp;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i += 2)
    {
        num.push_back(s[i]);
    }
    sort(num.begin(), num.end());
    int x = 0;
    int y = 0;
    for (int i = 0; i < num.size(); i++)
    {
        x = x * 10 + num[i];
        y = y * 10 + num[num.size() - 1 - i];
    }
    cout << y - x << endl;
}
int main()
{
    int nc;
    // cin >> nc;
    // while (nc--)
    {
        init();
        sol();
    }
    return 0;
}