#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int i(0), temp(0), n(0), rots(0), rown(0);
    vector<vector<int>> elements;
    cin >> n;
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> elements[i][j];
    cin >> rots;
    cin >> rown;
    while (rots--)
    {
        temp = elements[rown][0];
        for (i = 0; i < n; i++)
        {
        }
    }
    return 0;
}