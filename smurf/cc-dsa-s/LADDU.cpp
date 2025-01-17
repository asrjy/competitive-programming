#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, fr, i, lads(0), ranksev;
    cin >> t;
    string origin, s, act;
    while(t--){
	cin >> n >> origin;
	origin == "INDIAN" ? fr = 200 : fr = 400;
	for(i = 0; i < n; i++){
	    cin >> act;
	    if(act == "CONTEST_WON"){
		lads += 300;
		cin >> ranksev;
		ranksev <= 20 ? (lads+= (20 - ranksev)) : lads += 0;
	    } 
	    else if(act == "TOP_CONTRIBUTOR"){
		lads += 300;
	    }
	    else if(act == "BUG_FOUND"){
		cin >> ranksev;
		lads += ranksev;
	    } else 
		lads += 50;
	}
	cout << lads/fr << endl;
	lads = 0;
    }
    return 0;
}
