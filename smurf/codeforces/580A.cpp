#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int  i=0; i < n; i++){
        cin >> a[i];
    }
    int ans(1), temp(1), i(0);
    while(i<n-1){
        if(a[i] <= a[i+1]){
            temp++;
            i++;
        } else{
            temp = 1;
            i++;
        }
        if(temp >= ans) ans = temp;
    }
    cout << ans;
    return 0;
}
