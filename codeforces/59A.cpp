#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string word;
    int wordlength(0), iter(0), nlower(0), nupper(0);
    cin >> word;
    wordlength = word.length();
    for (iter = 0; iter < wordlength; iter++)
    {
        if (isupper(word[iter]))
        {
            nupper++;
        }
        else
        {
            nlower++;
        }
    }
    if (nlower < nupper)
    {
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    else
    {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    }
    cout << word << endl;
    return 0;
}
