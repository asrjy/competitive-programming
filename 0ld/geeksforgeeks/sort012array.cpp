// #include <bits/stdc++.h>
// using namespace std;
// void printvals(int m, int n)
// {
//     int iter = 0;
//     for (iter = 0; iter < n; iter++)
//     {
//         cout << m << " ";
//     }
// }
// int main()
// {
//     int test_cases(0), iter1(0), temp1(0), temp2(0);
//     cin >> test_cases;
//     temp1 = test_cases;
//     vector<int> mainans;
//     while (test_cases--)
//     {
//         int zerc(0), onec(0), twoc(0), n(0), iter(0), temp(0);
//         for (iter = 0; iter < n; iter++)
//         {
//             cin >> temp;
//             if (temp == 0)
//             {
//                 zerc++;
//             }
//             else if (temp == 1)
//             {
//                 onec++;
//             }
//             else
//             {
//                 twoc++;
//             }
//         }
//         mainans.push_back(twoc);
//         mainans.push_back(onec);
//         mainans.push_back(zerc);
//     }
//     for (iter1 = 0; iter1 < 3; iter1++)
//     {
//         if (iter1 == 0)
//         {
//             printvals(0, mainans[iter1]);
//         }
//         else if (iter1 == 1)
//         {
//             printvals(1, mainans[iter1]);
//         }
//         else
//         {
//             printvals(2, mainans[iter1]);
//             iter1 = 0;
//             cout << endl;
//         }
//         temp2++;
//         if (temp2 == temp1)
//         {
//             break;
//         }
//     }
//     return 0;
// }

// // 2
// // 5
// // 0 2 1 2 0
// // 3
// // 0 1 0

#include <iostream>
using namespace std;
void printvals(int m, int n)
{
    int iter = 0;
    for (iter = 0; iter < n; iter++)
    {
        cout << m << " ";
    }
}
int main()
{
    printvals(5, 6);
    return 0;
}