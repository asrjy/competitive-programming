#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    int n, temp, max, min, prev, i;
    while(t--){
	cin >> n;
	int arr[n-1];
	for(i = 0; i < n; i++){
	    if(i == 0) cin >> prev;
	    else{
		cin >> temp;
		arr[i-1] = temp - prev;
		prev = temp;
	    }
	}
	for(i = 0; i < n-1; i++){
	    if(arr[i+1] > arr[i]){
		
	    }
	}
    }
}
