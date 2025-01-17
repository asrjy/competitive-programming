#include <iostream>
using namespace std;
int main()
{
    int n(0), iter(0);
    float final(0);
    cin >> n;
    int pi[n];
    for (iter = 0; iter < n; iter++)
    {
        cin >> pi[iter];
    }
    for (iter = 0; iter < n; iter++)
    {
        final = final + pi[iter];
    }
    final = final / n;
    cout << final << endl;
    return 0;
}