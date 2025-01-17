#include <iostream>
#include <string>
using namespace std;
bool isPalindrom(string s, int low, int length)
{
    if (low == length)
    {
        return true;
    }
    if (s[low] != s[length - 1])
    {
        return false;
    }
    if (low < length)
    {
        return isPalindrom(s, low + 1, length - 1);
    }
    return true;
}
int main()
{
    string s = "vktkv";
    cout << isPalindrom(s, 0, s.length());
    return 0;
}