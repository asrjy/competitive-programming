#include <iostream>
using namespace std;
int main()
{
    int n(0), iter(0), zeroleft(0), zeroright(0), oneleft(0), oneright(0), final(0);
    cin >> n;
    int left[n], right[n];
    for (iter = 0; iter < n; iter++)
    {
        cin >> left[iter] >> right[iter];
    }
    for (iter = 0; iter < n; iter++)
    {
        if (left[iter] == 0)
        {
            zeroleft++;
        }
        if (right[iter] == 0)
        {
            zeroright++;
        }
    }
    oneleft = n - zeroleft;
    oneright = n - zeroright;
    if (oneleft > zeroleft)
    {
        final += zeroleft;
    }
    else
    {
        final += oneleft;
    }
    if (oneright > zeroright)
    {
        final += zeroright;
    }
    else
    {
        final += oneright;
    }
    cout << final << endl;
    return 0;
}