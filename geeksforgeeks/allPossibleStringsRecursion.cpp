#include <iostream>
#include <string>
using namespace std;
void printSubstrings(string str, string current = "", int index = 0)
{
    int lengthString = str.length();
    if (index == lengthString)
    {
        cout << current << " ";
    }
    printSubstrings(str, current, index + 1);
    printSubstrings(str, current + str[index], index + 1);
}
int main()
{
    string str1;
    cin >> str1;
    printSubstrings(str1);
    return 0;
}