#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t(0);
    cin >> t;
    while(t--){
        int n(0), x(0), i(0);
        cin >> n >> x;
        int temp(0);
        temp = x % n;
        int arr[n];
        for(i = 0; i < n; i++) cin >> arr[i];
        for(i = n-temp; i < n; i++) cout << arr[i] << " ";
        for(i = 0; i < n-temp; i++) cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
