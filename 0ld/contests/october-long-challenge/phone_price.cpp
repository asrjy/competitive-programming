#include<bits/stdc++.h>
using namespace std;
int good_check(int *prices, int day, int size){
  int j(day), counter(5);
  while((j--) && (counter--)){
    if(prices[day] < prices[j]){ 
      continue;
    } else {
      return 0;
    }
  }
  return 1;
}
int main(){
  int test_cases(0);
  cin >> test_cases;
  vector < int > answers;
  while(test_cases--){
    int n(0), i(0), counter(0);
    cin >> n;
    int prices[n];
    for(i = 0; i < n; i++){
      cin >> prices[i];
    }
    for(i = 0; i < n; i++){
      if(good_check(prices, i, n)){ counter++;
      }
      else continue;
    }
    answers.push_back(counter);
  }
  for(int answer: answers) cout << answer << endl;
  return 0;
}

