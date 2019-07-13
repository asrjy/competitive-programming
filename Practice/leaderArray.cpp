#include <iostream>
using namespace std;
int main()
{
    int n(0), iter(0);
    cin >> n;
    int arr[n];
    for (iter = 0; iter < n; iter++)
    {
        cin >> arr[iter];
    }
    int max(arr[n - 1]);
    cout << max << " ";
    for (iter = n - 1; iter >= 0; iter--)
    {
        if (arr[iter] > max)
        {
            cout << arr[iter] << " ";
            max = arr[iter];
        }
        else
        {
            continue;
        }
    }
    return 0;
}