#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n(0), temp(0), counter(0);
    cin >> n;
    queue<int> original_q, ideal_q;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        original_q.push(temp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        ideal_q.push(temp);
    }
    do
    {
        if (original_q.front() == ideal_q.front())
        {
            cout << "counter++ " << original_q.front() << endl;
            counter++;
            original_q.pop();
            ideal_q.pop();
        }
        temp = original_q.front();
        original_q.pop();
        original_q.push(temp);
    } while (original_q.front() != ideal_q.front());
    cout << (counter + n) << endl;
    return 0;
}