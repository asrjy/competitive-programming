#include <bits/stdc++.h>
using namespace std;
void calculatePrefixSum(int array[])
{
    int size(sizeof(array) / sizeof(array[0])), iter = 0;
    int prefixArray[size];
    prefixArray[0] = array[0];
    for (iter = 1; iter < size; iter++)
    {
        prefixArray[iter] = prefixArray[iter - 1] + array[iter];
    }
    for (iter = 0; iter < size; iter++)
    {
        cout << prefixArray[iter];
    }
}
int main()
{
    int n(0), iter(0);
    cin >> n;
    int array[n];
    for (iter = 0; iter < n; iter++)
    {
        cin >> array[iter];
    }
    calculatePrefixSum(array);
    return 0;
}