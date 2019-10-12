#include<iostream>
using namespace std;
int main(){
  int n(0), h(0);
  cin >> n >> h; int heights[n];
  int i(0), tot_width(0);
  for(i = 0;i < n; i++){
    cin >> heights[i];
  } 
  for(i = 0; i < n; i++){
    if(heights[i] > h){
      tot_width += 2;
    } else {
      tot_width++;
    }
  }
  cout << tot_width << endl;
  return 0;
}
