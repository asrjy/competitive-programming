#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
    long n;
    cin >> n;
    pair<long, long> tower[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tower[i].first;
        tower[i].second = i;
    }
    sort(tower, tower + n, greater<long>());
    for (int i = 0; i < n; i++)
    {
        }