#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i;
    cin >> n >> m;
    int a[n], b[m];
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    sort(b, b + m);
    if (a[n - 1] >= b[0])
    {
        cout << -1;
        return 0;
    }
    for (i = 1;; i++)
    {
        if (a[i] >= 2 * a[0])
        {
            cout << a[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}