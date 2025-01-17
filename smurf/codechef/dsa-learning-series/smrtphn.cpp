#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++)
	cin >> arr[i];
    long long int max(0), temp;
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
	temp = arr[i] * (n-i);
	if(temp > max) max = temp;
    }
    cout << max << endl;
    return 0;
}
