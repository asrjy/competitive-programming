#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[4];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	int i(0), sum(0), temp(0), j(0);
	temp = arr[0] + arr[1] + arr[2] + arr[3];
	//cout << "The sum is " << temp;
	for(i = 0; i < 4; i++){
		if(arr[i] == (temp - arr[i])){
			cout << "YES" << endl;
			return 0;
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3 && j != i; j++){
			if((arr[i] + arr[j]) == (temp - arr[i] - arr[j])){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}
