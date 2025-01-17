#include<iostream>
using namespace std;
int main(){
    int n, i, j, f = 0;
    cin >> n;
    for(i = 1; i <= 5*n; i += 5){
        if(f == 0){
            for(j = i; j <= i+4; j++){
                cout << j << " ";
            }
            f = 1;
        } else {
            for(j = i+4; j >= i; j--){
                cout << j << " ";
            }
            f = 0;
        }
        cout << "\n";
    }
    return 0;
}