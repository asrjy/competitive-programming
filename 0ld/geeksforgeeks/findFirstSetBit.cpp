#include <bits/stdc++.h>
unsigned int getFirstBit(int n)
{
    std::string s = std::bitset<64>(n).to_string();
    int strlength(s.length()), iter(0);
    for (iter = strlength; iter >= 0; iter--)
    {
        if (s[iter] == '1')
        {
            return (strlength - iter);
        }
    }
    return 0;
}
int main()
{
    int n(0);
    std::cin >> n;
    std::cout << getFirstBit(n);
    return 0;
}
