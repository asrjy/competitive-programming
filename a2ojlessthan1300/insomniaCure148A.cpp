#include <iostream>
using namespace std;
int main()
{
    int k(0), l(0), m(0), n(0), d(0), iter(0), safe(0), answer(0);
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    for (iter = 1; iter <= d; iter++)
    {
        if ((iter % k != 0) || (iter % l != 0) || (iter % m != 0) || (iter % n != 0))
        {
            safe++;
        }
        else
        {
            continue;
        }
    }
    answer = d - safe;
    cout << answer;
    return 0;
}