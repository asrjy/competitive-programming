#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np, mldrink, nslices, answer;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    mldrink = k * l;
    nslices = c * d;
    answer = min(min((mldrink / nl), nslices), (p / np));
    answer /= n;
    cout << answer << endl;
    return 0;
}