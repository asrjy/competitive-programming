#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string inp1, inp2, outp;
    cin >> inp1 >> inp2;
    int inp_length(inp1.length()), iter(0);
    for (iter = 0; iter < inp_length; iter++)
    {
        if (inp1[iter] == inp2[iter])
        {
            outp += '0';
        }
        else
        {
            outp += '1';
        }
    }
    cout << outp << endl;
    return 0;
}