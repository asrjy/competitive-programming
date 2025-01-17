#include<iostream>
using namespace std;
int main(){
	int n, a, ans(0), i, x(0);
	cin >> n >> a;
	int arr[n];
	for(i =0; i < n; i++)
		cin >> arr[n];
	for(i =0; i < n, x < n; i++){
		if(i == n-1){
			if(arr[i] != -1 && arr[i] <= a){
				arr[i] = -1;
				ans = i;
				x++;
				if(x == n)
					break;
				else
					i = 0;
			} else if(arr[i] != -1 && arr[i] > a){
				arr[i] -= a;
				i = 0;
			}
		} else {
			if(arr[i] != -1 && arr[i] <= a){
				arr[i] = -1;
				ans = i;
				x++;
			} else if(arr[i] != -1 && arr[i] > a){
				arr[i] -= a;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
