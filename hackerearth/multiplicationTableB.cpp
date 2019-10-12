//Yashwanth Allakky
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int n(0), i(0), j(0), iter(0);
    auto x(0);
    cin >> n;
    long long int matrix[n][n];
    double answers[n];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> matrix[i][j];
    x = matrix[0][1] / matrix[0][2];
    answers[2] = sqrt(matrix[1][2] / x);
    answers[0] = matrix[0][2] / answers[2];
    answers[1] = matrix[1][2] / answers[2];
    for (iter = 3; iter < n; iter++)
    {
        answers[iter] = matrix[iter - 1][iter] / answers[iter - 1];
    }
    for (iter = 0; iter < n; iter++)
    {
        cout << round(answers[iter]) << " ";
    }
    return 0;
}