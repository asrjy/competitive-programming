#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    cout << min(np/p, min((k*l)/nl, c*d))/n << endl;
    return 0;
}
