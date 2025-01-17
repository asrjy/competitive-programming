#include<iostream>
using namespace std;
int power(int n, int p){
    // Naive
    // int res=n;
    // for(int i=0; i<p-1; i++){
    //     res = res * res;
    // }
    // return res;
    // Recurs1ive Solution
    if(p == 0){
        return 1;
    }
    int temp = power(p, n/2);
    temp = temp*temp;
    if(n%2==0){
        return temp;
    } else {
        return temp * p;
    }
}
int binary_exponentiation(int n, int p){
    int res = 1;
    while(p>0){
        if(p%2!=0){
            res = res * n;
        }
        n = n * n;
        p = p/2;
    }
    return res;
}
int main(){
    cout << power(2,4) << endl;
    cout << binary_exponentiation(2,4) << endl;
    return 0;
}