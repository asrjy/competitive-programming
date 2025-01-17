#include<iostream>
using namespace std;
void print_ladder(){
  cout << "*   *" << endl;
  cout << "*   *" << endl;
  cout << "*****" << endl;
}
int main(){
  int n(0);
  cin >> n;
  for(int i = 0; i < n; i++){
    print_ladder();
  }
  cout << "*   *" << endl;
  cout << "*   *" << endl;
  return 0;
}
