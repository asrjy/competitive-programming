  #include <iostream>
using namespace std;
int isInteresting(int num);
int main()
{
    int num(0), iter(0), result(0);
    cin >> num;
    result = isInteresting(num);
    while (!isInteresting(num))
    {
        if (isInteresting(num))
        {
            cout << num << endl;
            break;
        }
        num++;
    }
    cout << num;
    return 0;
}

int isInteresting(int num)
{
    int t, sum = 0, remainder;

    t = num;

    while (t != 0)
    {
        remainder = t % 10;
        sum = sum + remainder;
        t = t / 10;
    }

    if (sum % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
