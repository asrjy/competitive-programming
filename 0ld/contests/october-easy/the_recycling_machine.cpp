#include<bits/stdc++.h>
using namespace std;
int main(){
  int test_cases(0), ans(0);
  cin >> test_cases;
  while(test_cases--){
    long long n(0), k(0), ans(0), temp(0), temp2(0);
    cin >> n >> k;
    while((n/k) != 0){
       
      ans += temp2;
      temp = n%k;
      n = temp + temp2;
    }
    cout << ans << endl;
  }
  return 0;
}
