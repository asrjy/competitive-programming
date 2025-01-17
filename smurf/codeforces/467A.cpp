#include<iostream>
using namespace std;
int main(){
    int n, i, ans(0), p, q;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> p >> q;
        if(p+2 <= q) ans++;
        else continue;
    }
    cout << ans;
    return 0;
}
