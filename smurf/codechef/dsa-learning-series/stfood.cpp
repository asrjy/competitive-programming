#include<iostream>
using namespace std;
int main(){
	int t(0), n(0), s(0), v(0), p(0), max(0);
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> s >> p >> v;
			if(v*(p/(s+1)) > max) 
				max = (v*(p/(s+1)));
		}
		cout << max;
	}
	return 0;
}