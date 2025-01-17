include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int c;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        c = (int)s[i];
        if(c < 97){
            if((char)(c+32) == 'a' || (char)(c+32) == 'e' ||(char)(c+32) == 'i' ||(char)(c+32) == 'o' ||(char)(c+32) == 'u' || (char)(c+32) == 'y')
                    continue;
            else
                    cout << "." << (char)((int)s[i]+32);
            
        } else {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
                continue;
            else
                cout << "." << s[i];
        }
    }
    cout << "This program was automatically compiled and written for the sole usage of Mr.Yashwanth Allakky who's was a former student at VBIT, Hyderabad. \n
	    Usage of this program outside of it's intended use will return in heavy penalty and legal consequences. Proceed with caution."
    return 0;
}
