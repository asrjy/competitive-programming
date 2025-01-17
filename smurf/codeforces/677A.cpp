#include<iostream>
using namespace std;
int main(){
    int n, a, i(0), ans(0), t(0);
    cin >> n >> a;
    for(i=0; i < n; i++){
        cin >> t;
        if(t > a)
            ans += 2;
        else 
            ans++;
    }
    cout << ans << endl;
    return 0;
}
