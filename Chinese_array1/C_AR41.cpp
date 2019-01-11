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
    int t = 0;
    float sum = 0;
    std::istringstream iss(s);
    string token;
    while (getline(iss, token, ' '))
    {
        t++;
        sum += stof(token);
        // std::cout << stoi(token) << std::endl;
    }
    printf("Size: %d\nAverage: %.3f\n", t, (sum / t));
}
int main()
{

    init();
    sol();
    return 0;
}