#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string code, decoded;
    int codelength(0), iter(0);
    cin >> code;
    codelength = code.length();
    for (iter = 0; iter < codelength; iter++)
    {
        if (code[iter] == '-' && code[iter + 1] == '-')
        {
            decoded += '2';
            iter++;
        }
        else if (code[iter] == '-' && code[iter + 1] == '.')
        {
            decoded += '1';
            iter++;
        }
        else if (code[iter] == '.')
        {
            decoded += '0';
        }
    }
    cout << decoded << endl;
    return 0;
}
