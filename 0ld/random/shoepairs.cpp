#include <iostream>
#include <vector>
using namespace std;
int returnMin(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}
int main()
{
    ios::sync_with_stdio(false);
    int npairs(0), count(0), iter(0);
    cin >> npairs;
    int sizes[npairs], lefts[100] = {0}, rights[100] = {0};
    char sides[npairs];
    for (iter = 0; iter < npairs; iter++)
    {
        cin >> sizes[iter];
        cin >> sides[iter];
        sides[iter] == 'L' ? lefts[sizes[iter] - 1]++ : rights[sizes[iter] - 1]++;
    }
    for (iter = 0; iter < 100; iter++)

    {
        if ((lefts[iter] != 0) && (rights[iter] != 0))
        {
            count += returnMin(lefts[iter], rights[iter]);
        }
    }
    cout << count;
    return 0;
}