#include<bits/stdc++.h>
using namespace std;
int main(){
    int lc(0), uc(0), i;
    string s;
    cin >> s;
    for(i =0; i<s.length(); i++){
	if(int(s[i]) > 91)
	    lc++;
	else
	    uc++;
    }
    if(uc > lc)
	transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
	transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    return 0;
}
