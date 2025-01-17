#include<iostream>
using namespace std;
int main(){
	int n, a(5), ans(0);
	cin >> n;
	while(n!=0){
		if(n>=a){
    		n -= a;
			ans++;
		} else {
	    	while(n<a){
		    	a--;
				if(n >= a){
					n -= a;
				    ans++;
					break;
				} 
			}
		}
	}
	cout << ans;
	return 0;
}
