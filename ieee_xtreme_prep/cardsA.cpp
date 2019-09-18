//Yashwanth Allakky
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n(0), iter(0), nzeros(0), one(0), zeros(0);
    string mainstring;
    cin >> n;
    cin >> mainstring;
    sort(mainstring.begin(), mainstring.end());
    for (iter = 0; iter < mainstring.size(); iter++)
    {
        if (mainstring[iter] == 'z')
            nzeros++;
        else
            continue;
    }
    zeros = nzeros;
    one = (n - (nzeros * 4)) / 3;
    for (iter = 0; iter < one; iter++)
        cout << "1"
             << " ";
    for (iter = 0; iter < zeros; iter++)
        cout << "0"
             << " ";
    return 0;
}