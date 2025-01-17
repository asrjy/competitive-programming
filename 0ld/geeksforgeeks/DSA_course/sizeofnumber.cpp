#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 1231731, size(0);
    if (n == 0)
    {
        cout << "Zero";
    }
    else
    {
        while (n > 0)
        {
            size++;
            n /= 10;
        }
        cout << size << endl;
    }
    return 0;
}