/*
    status: AC
*/
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;
int dp[507][507];
vector<pii> matrixs;
void init()
{
    memset(dp, INF, sizeof(dp));
    matrixs.clear();
}
int f(int l, int r)
{
    if (dp[l][r] != INF)
        return dp[l][r];
    else if (l == r)
        dp[l][r] = 0;
    else
    {
        for (int i = l; i < r; i++)
        {
            dp[l][r] = min(dp[l][r], f(l, i) + f(i + 1, r) + matrixs[l].first * matrixs[i].second * matrixs[r].second);
        }
    }
    return dp[l][r];
}
void sol()
{
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        matrixs.push_back(make_pair(a, b));
    }
    cout << f(0, n - 1) << endl;
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