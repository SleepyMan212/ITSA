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
    cin >> n;
    float x, y, z, sum;
    float p, q, r;
    sum = x = y = z = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q >> r;
        x += p;
        y += q;
        z += r;
    }
    printf("%.1f %.1f %.1f %.1f\n", ((x + y + z) / (3 * (float)n)), (x / (float)n), (y / (float)n), (z / (float)n));
    // printf("%.1f %.1f %.1f %.1f\n", round((x + y + z) / (3 * (float)n)), round(x / (float)n), round(y / (float)n), round(z / (float)n));
}
int main()
{
    init();
    sol();
    return 0;
}