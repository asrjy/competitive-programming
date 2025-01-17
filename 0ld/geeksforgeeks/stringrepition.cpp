#include <iostream>
#include <string>
using namespace std;
void abc(char *s)
{
    if (*s != '\0')
    {
        cout << *s;
        abc(s + 1);
        abc(s + 1);
    }
}
int main()
{
    string str1 = "abc";
    abc(*str1);
    return 0;
}