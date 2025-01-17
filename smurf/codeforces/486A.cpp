#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, ans(0),x;
    cin >> n;
    if(n%2==0){
        x = n/2;
        ans = ((x*x)+x)-(x*x);
        cout << ans << endl;
    } else {
        x = n/2;
        long long int y = x+1;
        ans = ((x*x)+x)-(y*y);
        cout << ans << endl;
    }
    return 0;
}
