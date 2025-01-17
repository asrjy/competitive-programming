#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float n, m, a;
    cin >> n >> m >> a;
    int ans((lround(n/a) * lround(m/a)));
    if(ans == 0 && a > n && a > m)
        ans = 1;
    cout << ans << endl;
    return 0;
}
