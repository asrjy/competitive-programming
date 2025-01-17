#include<bits/stdc++.h>
using namespace std;
int main(){
    int i(0);
    string s, s1, s2;
    cin >> i;
    while(i--){
	cin >> s;
	if(s.length() % 2 == 0){
	    s1 = s.substr(0, s.length()/2);
	    sort(s1.begin(), s1.end());
	    s2 = s.substr(s.length()/2, s.length());
	    sort(s2.begin(), s2.end());
	    if(s1 == s2)
		cout << "YES" << endl;
	    else
		cout << "NO" << endl;
	} else {
	    s1 = s.substr(0, s.length()/2);
	    sort(s1.begin(), s1.end());
	    s2 = s.substr(s.length()/2 + 1, s.length());
	    sort(s2.begin(), s2.end());
	    if(s1 == s2)
		cout << "YES" << endl;
	    else
		cout << "NO" << endl;
	}
    }
    return 0;
}
