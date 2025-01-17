#include <iostream>
#include <string>
using namespace std;
int main()
{
    string inputstring;
    cin >> inputstring;
    int iter(0), stringlength(inputstring.length());
    for (iter = 0; iter < stringlength; iter++)
    {
        if (inputstring[iter] == 'H' || inputstring[iter] == 'Q' || inputstring[iter] == '9')
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
