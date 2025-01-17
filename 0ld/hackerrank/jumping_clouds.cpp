#include<bits/stdc++.h>
using namespace std;
int main(){
    int n(0), i(0);
    cin >> n;
    int clouds[n];
    for(i = 0; i < n; i++){
        cin >> clouds[i];
    }
    int jumps(0);
    for(i = 0; i < n-2;){
        if(clouds[i+2] == 0){
            jumps++;
            i+=2;
            cout << 'i' << i << endl;
            continue;
        } else if(clouds[i+1] == 0){
            jumps++;
            i++;
            cout << 'i' << i << endl;
        }
    }
    cout << jumps << endl;
    return 0;
}