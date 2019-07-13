#include <bits/stdc++.h>
using namespace std;
#define MAX 100
#define NIL -1
int lookup[MAX];
// Initialize will default all the values in lookup array to NIL
void initialize()
{
    int iter;
    for (iter = 0; iter < MAX; iter++)
    {
        lookup[iter] = NIL;
    }
}

int fibonacci(int n)
{
    // If fibonacci of that value has not been calculated so far
    if (lookup[n] == NIL)
    {
        // If the value of n is <=1 i.e., end
        if (n <= 1)
        {
            lookup[n] = n;
        }
        // Else we calculate the fibonacci of that value
        else
        {
            lookup[n] = fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
    return lookup[n];
}

int main()
{
    int n(0);
    cin >> n;
    initialize();
    cout << "Fibonacci is : " << fibonacci(n);
    return 0;
}
