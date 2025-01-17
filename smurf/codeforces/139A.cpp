#include<iostream>
using namespace std;
int main(){
	int i(0), sum(0), n, x;
	cin >> n;
	int weeks[7];
	for(i =0; i < 7; i++){
		cin >> x;
		sum += x;
		weeks[i] = x;
	}
	cout << "sum is " << sum << endl;
	n = n - (n%sum)*n;
	cout << "n is " << n << endl;
	for(i = 0; i < 7; i++){
		n -= weeks[i];
		cout << "subbed " << weeks[i] << " from n " << n << endl; 
		if(n <= 0){
			cout << i+1 << endl;
			return 0;
		}
	}
}
