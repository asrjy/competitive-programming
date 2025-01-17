#include<iostream>
using namespace std;
int main(){
    int n(0), i(0), temp(0), odd(0), even(0), oddc(0), evenc(0);
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> temp;
        if(temp & 1) {
            odd = i;
            oddc++;
        } else{
            even = i;
            evenc++;
        }
    }
    if(oddc > evenc) cout << (even+ 1)<< endl;
    else cout << ( odd + 1 ) << endl;
    return 0;
}
