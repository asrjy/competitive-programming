#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
	int n; cin >> n;
	int ans(1), gmax(0), i, temp;
	for(i = 0; i < n; i++){
	    cin >> temp;
	    if(i==0) gmax = temp;
	    else{
		if(temp <= gmax){
		    ans++;
		    gmax = temp;
		}
	    }
	} 
	cout << ans << "\n";
    }
    return 0;
}
