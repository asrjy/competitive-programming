#include<iostream>
using namespace std;
int main(){
	int n, x, i, l_p(-1), t;
	cin >> n >> x;
	for(i=0; i<n; i++){
		cin >> t;
		if(t==x) l_p = i+1;
	}
	cout << l_p;
	return 0;
}