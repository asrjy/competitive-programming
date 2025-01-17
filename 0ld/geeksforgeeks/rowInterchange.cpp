#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int c(0);
    c = a;
    a = b;
    b = c;
}
void interchange_rows(int main_array[][c])
{
    int iter(0), r(sizeof(main_array) / (c * sizeof(int)));
    for (iter = 0; iter < c; iter++)
        swap(main_array[0][iter], main_array[r - 1][iter]);
}
int main()
{
    int test_cases(0);
    cin >> test_cases;
    while (test_cases--)
    {
        int r(0), c(0), iter(0), iter1(0);
        cin >> r >> c;
        int main_array[r][c];
        for (iter = 0; iter < r; iter++)
            for (iter1 = 0; iter1 < r; iter1++)
                cin >> main_array[iter][iter1];
        interchange_rows(main_array);
        for (iter = 0; iter < r; iter++)
            for (iter1 = 0; iter1 < c; iter1++)
                cout << main_array[iter][iter1];
    }
    return 0;
}