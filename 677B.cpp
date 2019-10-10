#include<bits/stdc++.h>
using namespace std;
int main(){
  int n(0), h(0), k(0);
  cin >> n >> h >> k;
  int heights[n], i(0), seconds(0), inprocessor(0), temp(0), temp2(0);
  for(i = 0; i < n; i++) cin >> heights[i];
  sort(heights, heights+n);
  for(i = 0; i < n; i++) {
    inprocessor += heights[i];
      if(inprocessor > h){
        //Clearing processor and adding next one should not allow the next potato to be smashed
        if((inprocessor - ((inprocessor/k)*k) + heights[i]) > h){
          cout << "i is : " << i << endl;
          temp = inprocessor/k;
          temp2 = inprocessor % k;
          inprocessor -= temp * k;
          seconds += temp;
          seconds += 1;
        }
        else{
          inprocessor -= heights[i];
          temp = inprocessor/k;
          inprocessor -= temp * k;
          seconds += temp;
          i--;
        }
    } else if(inprocessor == h){
      temp = inprocessor/k;
      inprocessor -= temp * k;
      seconds += temp;
    }
  }
  cout << seconds << endl;
  return 0;
}
