#include <bits/stdc++.h>
int rightMostDifferentBit(int n, int m)
{
    std::string s1 = std::bitset<64>(n).to_string();
    std::string s2 = std::bitset<64>(m).to_string();
    int strlength = s1.length() > s2.length() ? s1.length() : s2.length(), iter(0);
    for (iter = strlength; iter >= 0; iter--)
    {
        if (s1[iter] != s2[iter])
        {
            return strlength - iter;
        }
    }
    return 0;
}
int main()
{
    int n(0), m(0);
    std::cin >> n >> m;
    std::cout << rightMostDifferentBit(n, m);
    return 0;
}