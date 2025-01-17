#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long int k, d0, d1;
        cin >> k >> d0 >> d1;
        int d2 = (d0 + d1)%10;
        int p = (k-3)/4;
        int rem = (k-3)-(4*p);
        long long int s = (2*(d0 + d1))%10 + (4*(d0 + d1))%10 + (8*(d0 + d1))%10 + (6*(d0 + d1))%10;
        long long int sum = d0 + d1 + d2 + (p*s);
        cout << rem << endl;
        if(rem == 1){
            sum += (2*(d0 + d1))%10;
        } else if(rem == 2){
            sum += (2*(d0 + d1))%10 + (4*(d0 + d1))%10;
        } else if(rem == 3){
            sum += (2*(d0 + d1))%10 + (4*(d0 + d1))%10 + (8*(d0 + d1))%10;
        }
        if(sum%3 == 0)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}