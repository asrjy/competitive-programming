#include<iostream>
using namespace std;
int main(){
    int i, max(0), min(0), tot(0), n, t, maxi(0), mini(0);
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
	cin >> arr[i];
	if(arr[i] > max){
	    maxi = i;
	    max = arr[i];
	}
    }
    min = arr[0];
    for(i = 1; i < n; i++){
	if(arr[i] <= min){
	    min = arr[i];
	    mini = i;
	}
    }
    for(i = 0; i < n; i++){
	if(arr[i] == max){
	    tot += i;
	    break;
	}
    }
    for(i = n-1, t = 0; i >= 0; i--, t++){
	if(arr[i] == min){
	    if(mini > maxi)
		tot+= t;
	    else
		tot+=(t-1);
	    break;
	}
    }
    cout << tot;
    return 0;
}
