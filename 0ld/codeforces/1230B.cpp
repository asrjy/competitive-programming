#include<bits/stdc++.h>
using namespace std;
int main(){
	string num;
	int n(0), k(0);
	cin >> n >> k >> num;
	if(n == 1){
		if(k >= 1){
			cout << 0 << endl;
			return 0;
		} else {
			cout << num << endl;
			return 0;
		}
	}
	if(k == 0){
		cout << num << endl;
		return 0; 
	}
	for(int i = 0; i < n; i++){
		if(i == 0){
			if(num[i] != '1'){
				num[i] = '1';
				k--;
				continue;
			}
		} else {
			if(k > 0){
				if(num[i] != '0'){
					num[i] = '0';
					k--;
				}
			}
		}
	}
	cout << num << endl;
	return 0;
}
