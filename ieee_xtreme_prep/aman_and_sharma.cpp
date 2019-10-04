#include<bits/stdc++.h>
using namespace std;
int main(){
  int test_cases, sum(0);
  cin >> test_cases;
  while(test_cases--){
    int r(0), k(0);
    cin >> r >> k;
    int circum((2* 22 * r)/7);
    if(circum < (k*100)) sum++;
  }
  cout << sum << endl;
  return 0;
}
