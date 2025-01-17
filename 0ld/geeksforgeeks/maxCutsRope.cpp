// CPP program to find maximum number of
// pieces of a rope
#include <bits/stdc++.h>
using namespace std;
int maxCuts(int n, int a, int b, int c)
{
    if (n < 0)
        return -1;
    if (n == 0)
        return 0;
    int res = max({maxCuts(n - a, a, b, c),
                   maxCuts(n - b, a, b, c),
                   maxCuts(n - c, a, b, c)});
    if (res == -1)
        return -1;
    else
        return res + 1;
}

int main()
{
    cout << maxCuts(23, 11, 9, 12);
    return 0;
}