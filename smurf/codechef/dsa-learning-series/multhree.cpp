#include<iostream>
using namespace std;
int main(){
    unsigned long long int t, n, i, j, sum;
    cin >> t;
    while(t--){
	cin >> n >> i >> j;
	sum = i + j;
	for(i = 0; i < n-2; i++)
	    sum += sum % 10;
	if(sum % 3 == 0) 
	    cout << "YES" << endl;
	else
	    cout << "NO" << endl;
    }
    return 0;
}
