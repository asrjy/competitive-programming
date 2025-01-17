#include<bits/stdc++.h>
using namespace std;
int main(){
	int t(0);
	cin >> t;
	while(t--){
		int n(0), m(0);
		cin >> n >> m;
		vector < int > arr, brr;
		for(int i =0; i < n; i++){
			cin >> arr[i];
		}
		for(int i = 0; i < m; i++){
			cin >> brr[i];
		} 
		vector < int > marr;
		for(int i =0; i < n; i++){
			marr[i] = arr[i];
		}
		for(int i = 0; i < m; i++){
			marr[i+n] = brr[i];
		}
		sort(marr.begin(), marr.end());
		cout << marr[(n+m)/2];
	}
	return 0;
}
