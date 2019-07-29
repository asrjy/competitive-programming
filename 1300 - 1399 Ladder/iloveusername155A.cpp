#include <bits/stdc++.h>
int main()
{
    int ncontests(0), currmax(0), currmin(0), currscore(0), aperfs(0), iter(0);
    std::cin >> ncontests;
    for (iter = 0; iter < ncontests; iter++)
    {
        std::cin >> currscore;
        if (iter == 0)
        {
            currmax = currscore;
            currmin = currscore;
        }
        else
        {
            if (currscore > currmax)
            {
                currmax = currscore;
                aperfs++;
            }
            else if (currscore < currmin)
            {
                currmin = currscore;
                aperfs++;
            }
            else
            {
                continue;
            }
        }
    }
    std::cout << aperfs;
    return 0;
}