#include <iostream>
using namespace std;
int main()
{
    int n(0);
    cin >> n;
    int arr[n];
    for (int iter = 0; iter < n; iter++)
    {
        cin >> arr[iter];
    }
    int low(0), high(n - 1);
    while (low < high)
    {
        arr[low] = arr[low] + arr[high];
        arr[high] = arr[low] - arr[high];
        arr[low] = arr[low] - arr[high];
        low++;
        high--;
    }
    for (int iter = 0; iter < n; iter++)
    {
        cout << arr[iter] << " ";
    }
    return 0;
}
