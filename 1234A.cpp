#include<bits/stdc++.h>
using namespace std;
int main(){
	int t(0);
	cin >> t;
	vector <int> answers;
	while(t--){
		int n(0), sum(0), temp(0);
		cin >> n;
		vector <int> prices;
		for(int i = 0; i < n; i++){
			cin >> temp;
			prices.push_back(temp);
			sum += prices[i];
		}
		int mean(sum/n);
		if((mean * n) >= sum){
			answers.push_back(mean);
		} else {
			answers.push_back(mean+1);
		}
	}
	for(int i = 0; i < answers.size(); i++){
		cout << answers[i] << endl;
	}
	return 0;
}
