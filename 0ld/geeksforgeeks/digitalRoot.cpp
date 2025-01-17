#include <bits/stdc++.h>
int digitalRoot(int n)
{
    if (n / 10 == 0)
    {
        return n;
    }
    return (digitalRoot(n % 10 + n / 10));
}
int main()
{
    int n(0);
    std::cin >> n;
    std::cout << digitalRoot(n);
    return 0;
}