#include <iostream>
using namespace std;
int checkprime(int n);
int main()
{
    int m(0), n(0), iter(0), mprime(0), temp_answer(0);
    cin >> n >> m;
    for (iter = n + 1; iter <= m; iter++)
    {
        if (checkprime(iter) == 1)
        {
            if (iter == m)
            {
                cout << "YES" << endl;
                return 0;
            }
            else if (iter < m)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}

int checkprime(int n)
{
    int iter(2);
    for (iter = 2; iter < n; iter++)
    {
        if (n % iter == 0)
        {
            return 0;
        }
    }
    return 1;
}