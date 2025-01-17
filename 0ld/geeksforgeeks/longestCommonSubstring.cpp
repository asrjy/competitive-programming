#include <bits/stdc++.h>
using namespace std;
int lcs(string s1, string s2)
{
    int l1(s1.length()), l2(s2.length());
    if (l1 == 0 && l2 == 0)
    {
        return 0;
    }
}
int main()
{
    string s1, s2;
    cout << "Enter String 1";
    cin >> s1;
    cout << "Enter String 2";
    cin >> s2;
    lcs(s1, s2);
}