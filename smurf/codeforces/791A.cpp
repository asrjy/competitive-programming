#include<iostream>
using namespace std;
int main(){
		long long int l, b, a(0);
		cin >> l >> b;
		while(l <= b){
				l *= 3;
				b *= 2;
				a++;
				if(l > b){
						cout << a << endl;
						return 0;
				}
						
		}
		return 0;
}
