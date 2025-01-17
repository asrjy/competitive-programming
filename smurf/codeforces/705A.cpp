#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        if(i==n-1){
            if(n%2==0)
                cout << "I love it";
            else
                cout << "I hate it";
        } else {
            if(i%2!=0)
                cout << "I love that ";
            else 
                cout << "I hate that ";
        }
    }
    return 0;
}
