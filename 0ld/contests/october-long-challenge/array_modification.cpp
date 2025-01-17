#include<bits/stdc++.h>
using namespace std;
int main(){
  int test_cases(0);
  cin >> test_cases;
  while(test_cases--){
    int n(0), i(0), a(0);
    long long k(0);
    cin >> n >> k;
    int arr[n];
    for(i = 0; i < n; i++) cin >> arr[i];
    for(i = 0; i < k; i++){
      a = i%n;
      arr[a] = arr[a] ^ arr[n - (a) - 1];
    }
    for(int val : arr) cout << val << " " ;
    cout << endl;
  }
  return 0;
}
