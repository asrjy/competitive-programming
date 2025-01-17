#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int is_unique(int n){
    string s = to_string(n);
    sort(s.begin(), s.end());
    for(int i = 0; i < s.length() - 1; i++){
	if(s[i] == s[i+1]) return 0;
    }
    return 1;
}
int main(){
    int n; cin >> n;
    while(1){
	if(is_unique(++n)){
	    cout << n;
	    return 0;
	} else continue;
    }
    return 0;
}
