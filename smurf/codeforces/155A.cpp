#include<iostream>
using namespace std;
int main(){
    int n, i, min(9999), max(-1), cnt(0), a;
    cin >> n;
    for(i =0 ; i < n; i++){
	if(i==0){
	    cin >> a;
	    min = a;
	    max = a;
	} else{
	    cin >> a;
	    if(a > max){
		max = a;
		cnt++;
	    }
	    else if(a < min){
		min = a;
		cnt++;
	    }
	    else
		continue;
	}
    }
    cout << cnt;
    return 0;
}
