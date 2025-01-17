#include<iostream>
using namespace std;
int main(){
    int n;
    while(1){
	cin >> n;
	if(n == 42){
	    cout << 42 << endl;
	    return 0;
	}
	else 
	    cout << n << endl;
    }
    return 0;
}
