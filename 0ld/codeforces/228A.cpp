#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int iter(0), shoes[4], equal(3);
    for (iter = 0; iter < 4; iter++)
    {
        cin >> shoes[iter];
    }
    sort(shoes, shoes + 4);
    for (iter = 0; iter < 3; iter++)
    {
        if (shoes[iter] != shoes[iter + 1])
        {
            equal--;
        }
    }
    cout << equal << endl;
    return 0;
}
