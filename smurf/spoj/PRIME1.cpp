#include<iostream>
using namespace std;
int main(){
    int t, m, n, i, j; cin >> t;
    while(t--){
	cin >> m >> n;
	for(i = m; i <= n; i++){
	    for(j = 0; j <= sqrt(i); j++){
		if(i%j == 0){
		    break;
		} 
	    }
	}
    }
}
