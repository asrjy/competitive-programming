#include <iostream>
#include <string.h>
using namespace std;
int check_distinct(int year);
int main()
{
    int baseyear;
    cin >> baseyear;
    int answeryear(baseyear);
    while (true)
    {
        answeryear++;
        if (check_distinct(answeryear) == 1)
        {
            break;
        }
    }
    cout << answeryear << endl;
    return 0;
}

int check_distinct(int year)
{
    string yearString = to_string(year);
    if (yearString[0] != yearString[1] && yearString[0] != yearString[2] && yearString[0] != yearString[3] && yearString[1] != yearString[2] && yearString[1] != yearString[3] && yearString[2] != yearString[3])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}