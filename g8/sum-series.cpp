#include<iostream>
using namespace std;
int main(){
    int i, sum(0), term(1);
    int n; 
    cin >> n;
    cout << 1 << endl;
    for(i = 1; i<= n; i++){
	sum += term;
	term += i;
	cout << term << endl;
    }
    cout << "SUM " << sum << endl;
    return 0;
}
