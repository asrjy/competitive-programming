#include <bits/stdc++.h>
int main()
{
    int nbags(0), sum(0), ncookies(0), answer(0), iter(0);
    std::cin >> nbags;
    int cookies[nbags];
    for (iter = 0; iter < nbags; iter++)
    {
        std::cin >> ncookies;
        sum += ncookies;
        cookies[iter] = ncookies;
    }
    for (iter = 0; iter < nbags; iter++)
    {
        if ((sum - cookies[iter]) % 2 == 0)
        {
            answer++;
        }
        else
        {
            continue;
        }
    }
    std::cout << answer;
}
