#include<bits/stdc++.h>
using namespace std;
int main(){
  int test_cases(0);
  cin >> test_cases;
  vector < int > answers;
  while(test_cases--){
    int n(0), m(0), k(0);
    cin >> n >> m >> k;
    int arr[n][m] = {0};
    int i(0), j(0), a(0), b(0), counter(0);
    while(k--){
      cin >> a >> b;
      for(i = 0; i < n; i++ )
        arr[i][b-1]++;
      for(i = 0; i < m; i++)
        arr[a-1][i]++;
    }
    for(i = 0; i < n; i++)
      for(j = 0; j < m; j++)
        if(arr[i][j]%2 != 0) counter++;
    answers.push_back(counter);
  }
  for(int answer: answers) cout << answer << endl;
  return 0;
}
