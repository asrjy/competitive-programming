#include<bits/stdc++.h>
using namespace std;
bool isVowel(char a){
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        return 1;
    else 
        return 0;
}    
//BRUTEFORCING
int main(){
    string s;
    cin >> s;
    int max(0), counter(0);
    for(int i = 0; i < s.size(); i++){
        if(isVowel(s[i])){
            counter++;
            for(int j = i+1; j < s.size(); j++){
                if(isVowel(s[j])){
                    counter++;
                } else {
                    break;
                }
            }
        } else continue;
        if(counter > max) {max = counter; counter = 0;}
    }
    cout << max << endl;
    return 0;
}
