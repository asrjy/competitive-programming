#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int n(s.length()), i(0);
	for(i=0; i < n; i++){
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
