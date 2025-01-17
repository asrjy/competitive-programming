#include<iostream>
#include<string>
using namespace std;
int main(){
		string s;
		long long int n, k;
		cin >> n >> k;
		s = to_string(n);
		while(k > 0){
				if(s[s.size()-1] == '0')
						n /= 10;
				else
						n--;
				s = to_string(n);
				k--;

		}
		cout << n << endl;
		return 0;
}
