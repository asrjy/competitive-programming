#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n(0), iter(0), answer(0);
    cin >> n;
    string inputs[n];
    for (iter = 0; iter < n; iter++)
    {
        cin >> inputs[iter];
    }
    for (iter = 0; iter < n; iter++)
    {
        if (inputs[iter][0] == '+' || inputs[iter][2] == '+')
        {
            answer++;
        }
        else if (inputs[iter][0] == '-' || inputs[iter][2] == '-')
        {
            answer--;
        }
    }
    cout << answer << endl;
    return 0;
}