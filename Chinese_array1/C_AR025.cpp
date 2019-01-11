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
    getline(cin, s);
    map<char, int, greater<char>> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto tmp : mp)
    {
        cout << (int)tmp.first << " " << tmp.second << endl;
    }
}
int main()
{
    init();
    sol();
    return 0;
}