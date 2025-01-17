#include<bits/stdc++.h>
using namespace std;
int main(){
  int l(0), r(0), k(0), i(0), count(0);
  cin >> l >> r >> k;
  for(i = l; i < r+1; i++){
    if(i%k == 0) count++;
    else continue;
  }
  cout << count << endl;
  return 0;
}
