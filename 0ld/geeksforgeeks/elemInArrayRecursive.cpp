#include <iostream>
using namespace std;
bool elemInArray(int arr[], int lowBound, int upBound, int elem)
{
    if (lowBound > upBound)
    {
        return false;
    }
    if (arr[lowBound] == elem)
    {
        return true;
    }
    if (arr[upBound] == elem)
    {
        return true;
    }
    return (elemInArray(arr, lowBound + 1, upBound - 1, elem));
}
int main()
{
    int n(0), iter(0);
    cin >> n;
    int arr[n];
    for (iter = 0; iter < n; iter++)
    {
        cin >> arr[iter];
    }
    cout << elemInArray(arr, 0, n - 1, 5);
    return 0;
}