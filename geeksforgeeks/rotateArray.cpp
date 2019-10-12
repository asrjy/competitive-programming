#include <iostream>
using namespace std;
void swapElem(int arr[], int a, int b)
{
    arr[a] = arr[a] + arr[b];
    arr[b] = arr[a] - arr[b];
    arr[a] = arr[a] - arr[b];
}
int main()
{
    int n(0), iter(0), val(0);
    cin >> n;
    int arr[n];
    for (iter = 0; iter < n; iter++)
    {
        cin >> arr[iter];
    }
    cin >> val;
    int low(0), high(val - 1);
    while (low < high)
    {
        swapElem(arr, low, high);
        low++;
        high--;
    }
    low = val;
    high = n - 1;
    while (low < high)
    {
        swapElem(arr, low, high);
        low++;
        high--;
    }
    low = 0;
    high = n - 1;
    while (low < high)
    {
        swapElem(arr, low, high);
        low++;
        high--;
    }
    for (iter = 0; iter < n; iter++)
    {
        cout << arr[iter] << " ";
    }
    return 0;
}
