//Yashwanth Allakky
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    string a("this is a string");
    sort(a.begin(), a.end());
    cout << a << endl;
    int i(1323235);
    sort(to_string(i).begin(), i).end());
    cout << i << endl;
    return 0;
}