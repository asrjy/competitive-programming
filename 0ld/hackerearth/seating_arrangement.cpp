#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t(0);
    cin >> t;
    while (t--)
    {
        int s(0), lor(0), b12(0), b6(0), oseat(0);
        cin >> s;
        string seat_pos;
        b12 = s % 12;
        b6 = b12 % 6;
        if (b12 > 6 || b12 == 0)
            lor = 1;
        else
            lor = 0;
        if (b6 == 1 || b6 == 0)
        {
            seat_pos = "WS";
            if (lor == 1)
            {
                if (b12 == 7)
                {
                    oseat = s - 1;
                }
                else if (b12 == 0)
                {
                    oseat = s - 11;
                }
            }
            else
            {
                if (b12 == 1)
                {
                    oseat = s + 11;
                }
                else if (b12 == 6)
                {
                    oseat = s + 1;
                }
            }
        }
        else if (b6 == 2 || b6 == 5)
        {
            seat_pos = "MS";
            if (lor == 1)
            {
                if (b12 == 8)
                {
                    oseat = s - 3;
                }
                else if (b12 == 11)
                {
                    oseat = s - 9;
                }
            }
            else
            {
                if (b12 == 2)
                {
                    oseat = s + 9;
                }
                else if (b12 == 5)
                {
                    oseat = s + 3;
                }
            }
        }
        else if (b6 == 3 || b6 == 4)
        {
            seat_pos = "AS";
            if (lor == 1)
            {
                if (b12 == 9)
                {
                    oseat = s - 5;
                }
                else if (b12 == 10)
                {
                    oseat = s - 7;
                }
            }
            else
            {
                if (b12 == 3)
                {
                    oseat = s + 7;
                }
                else if (b12 == 4)
                {
                    oseat = s + 5;
                }
            }
        }
        cout << oseat << " " << seat_pos << endl;
    }
    return 0;
}
