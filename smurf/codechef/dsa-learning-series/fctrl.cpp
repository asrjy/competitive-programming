#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
	long long int n, ans(0);
	cin >> n;
	for(long long int i = 5; i <=n; i *= 5)
	    ans += n/i;
	cout << ans << endl;
    }
    return 0;
}
