#include<iostream>
using namespace std;
void print_star(int n){
  int i = 0;
  for(i = 0; i < n; i++) cout << "*";
}
void print_hash(int n){
  int i = 0;
  for(i = 0; i < n; i++) cout << "#";
}
int main(){
  int test_cases(0);
  cin >> test_cases;
  while(test_cases--){
    int n(0), s(0), h(0), iter(0), iter1(0);
    cin >> n;
    for(iter = 1, iter1 = ((n-1)*2); iter <= n && iter1; iter++ && (iter1 -= 2)){
      print_star(iter);
      print_hash(iter1);
      print_star(iter);
      cout << "\n";
    }
    print_star(n*2);
    cout << "\n" << endl;
  }
  return 0;
}
