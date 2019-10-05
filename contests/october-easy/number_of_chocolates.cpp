#include<bits/stdc++.h>
using namespace std;
int main(){
  int a(0), b(0), d1(0), d2(0), temp(0);
  cin >> a >> b >> d1 >> d2;
  int a_loses_in = a/d1;
  temp = (d2 * a_loses_in) + b;
  cout << temp;
  return 0;
}
