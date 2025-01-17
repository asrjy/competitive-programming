#include <bits/stdc++.h>
using namespace std;
int counter(int n, int m)
{
    string number = to_string(n);
    int iter = 0, strleng(number.length()), counter(0);
    for (iter = 0; iter < strleng; iter++)
    {
        if (stoi(number[iter]) == m)
            counter++;
    }
    return counter;
}
int main0()
{
    int val;
    val = counter(12341, 1);
    cout << val;
    return 0;
}