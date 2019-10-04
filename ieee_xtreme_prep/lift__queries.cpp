#include<bits/stdc++.h>
using namespace std;
int main(){
  int test_cases;
  cin >> test_cases;
  vector <string> answers;
  int a(0), b(7);  
  while(test_cases--){
    int n(0);
    cin >> n;
    if(abs(n-a)==abs(n-b)){
      if(a<b){
        answers.push_back("A");
        a = n;
      } else {
        answers.push_back("B");
        b = n;
      }
    } else if(abs(n-a) > abs(n-b)){
        answers.push_back("B");
        b = n;
    } else {
        answers.push_back("A");
        a = n;
    }
  }
  for(auto answer: answers){
    cout << answer << endl;
  }
  return 0;
}
