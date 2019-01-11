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
    int cnt[27];
    for (int i = 0; i < 26; i++)
        cnt[i] = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            // cout << s[i];
            cnt[tolower(s[i]) - 'a']++;
        }
    }
    for (int i = 0; i < 25; i++)
    {
        cout << cnt[i] << " ";
    }
    cout << cnt[25] << endl;
}
int main()
{
    // int nc;
    // cin >> nc;
    // while (nc--)
    // {
    init();
    sol();
    // }
    return 0;
}