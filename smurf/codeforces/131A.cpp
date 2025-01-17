#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s.size() > 1){
        for(int i=0; i < s.size(); i++){
            if((int)s[0] >= 97 && (int)s[1] >= 97){
                cout << s << endl;
            } else if((int)s[0] >= 97 && (int)s[1] <= 97){
                cout << toupper(s) << endl;
            } else {
                cout << toupper(s) << endl;
            }
        }
    } else {
        if((int)s[0] <= 97)
            cout << toupper(s) << endl;
        else
            cout << s << endl;
    }
    return 0;
}
