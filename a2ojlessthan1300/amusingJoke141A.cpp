#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string name1, name2, namecomb, namescrambled;
    cin >> name1 >> name2 >> namescrambled;
    namecomb = name1 + name2;
    sort(namecomb.begin(), namecomb.end());
    sort(namescrambled.begin(), namescrambled.end());
    if (namecomb == namescrambled)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}