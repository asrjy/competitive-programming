#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string a, wrongstr, rightstr;
    cin >> a >> wrongstr;
    if(a[0] == 'R'){
        for(int i = 0; i < wrongstr.length(); i++)
        {
            for(int j = 0; j < 30; j++){
                if(s[j] == wrongstr[i]){
                    rightstr += s[j-1];
                }
            }
        }
    } else {
        for(int i = 0; i < wrongstr.length(); i++)
        {
            for(int j = 0; j < 30; j++){
                if(s[j] == wrongstr[i]){
                    rightstr += s[j+1];
                }
            }
        }
    }
    cout << rightstr << endl;
    return 0;
}