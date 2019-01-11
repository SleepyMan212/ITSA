/*
    status: wa
*/
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;
struct CmpByKey
{
    bool operator()(const char &k1, const char &k2)
    {
        // return k1 > k2;
        if (tolower(k1) == tolower(k2))
            return k1 < k2;
        return tolower(k1) < tolower(k2);
    }
};
void init()
{
}
void sol()
{
    string s;
    int cnt = 1;
    map<char, int, CmpByKey> c;
    while (getline(cin, s))
    {
        cnt = 1;
        c.clear();
        for (int i = 0; i < s.size(); i++)
        {
            if (isspace(s[i]))
            {
                cnt++;

                continue;
            }
            if (!isalpha(s[i]))
                continue;
            c[s[i]]++;
        }
        cout << cnt << endl;
        for (auto tmp : c)
        {
            cout << tmp.first << " : " << tmp.second << endl;
        }
    }
}
int main()
{
    int nc;
    // cin >> nc;
    while (nc--)
    {
        init();
        sol();
    }
    return 0;
}