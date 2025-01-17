#include<bits/stdc++.h>
using namespace std;
int main(){
    int t(0);
    cin >> t;
    while(t--){
        int n(0);
        cin >> n;
        if(n < 0) cout << n * -1 << endl;
        else cout << n << endl;
    }
    return 0;
}