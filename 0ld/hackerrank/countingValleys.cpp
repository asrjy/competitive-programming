#include<bits/stdc++.h>
using namespace std;
int main(){
    int n(0), i(0);
    cin >> n;
    string s;
    cin >> s;
    int range(0), valleys(0);
    for(i = 0; i < s.size(); i++){
        if(s[i] == 'U'){
            range++;
            if(range == 0){
                if(range-1 < 0 && range-1 < 0)
                    valleys++;
            }
        } else {
            range--;
            if(range == 0 && range+1 < 0){
                valleys++;
            }
        }
    }
    cout << valleys  << endl;
    return 0;
}
