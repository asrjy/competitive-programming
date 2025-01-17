/*
Starting with H 
For n(T)
if even -> /2
else    -> /2 + 1
For n(H)
if even -> /2
else    -> /2
T H H H H H H H 
H T H H H H H H
T H T H H H H H
H T H T H H H H
T H T H T H H H
H T H T H T H H
T H T H T H T H
H T H T H T H T
*/
#include<iostream>
using namespace std;
int main(){
    long long int t, n, i, nr, q, ans;
    cin >> t;
    while(t--){
	cin >> nr;
	while(nr--){
	    cin >> i >> n >> q;
	    if(i == 1){
		if(n%2 == 0 ){
		    if(q == 1)
			cout << n/2 << endl;
		    else
			cout << n/2 << endl;
		} else {
		    if(q == 1)
			cout << n/2 << endl;
		    else
			cout << n/2 + 1 << endl;
		}
	    } else {
		if(n%2 == 0){
		    if(q == 1)
			cout << n/2 << endl;
		    else 
			cout << n/2 << endl;
		} else {
		    if(q ==1)
			cout << n/2 + 1 << endl;
		    else 
			cout << n/2 << endl;
		}
	    }
	}
    }
    return 0;
}
