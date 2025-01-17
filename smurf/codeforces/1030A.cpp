#include<iostream>
using namespace std;
int main(){
    int n,i,a(0),t;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> t;
        if(t==1) a=1;
    }
    if(a==1) cout << "HARD";
    else cout << "EASY";
    return 0;
}
