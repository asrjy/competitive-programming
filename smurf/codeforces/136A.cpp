#include<iostream>
using namespace std;
int main(){
    int n,a,i;
    cin >> n;
    int ans[n];
    for(i=0; i<n; i++){
        cin >> a;
        ans[a-1] = i+1;
    }
    for(i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
