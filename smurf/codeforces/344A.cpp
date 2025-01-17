#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, a;
    int n, ans(1);
    cin >> n;
    if(n >1){
        for(int i=0; i < n; i++){
            if(i==0){
                cin >> s;
                a = s;
            } else {
                cin >> s;
                if(s == a){
                    a = s;
                    continue;
                }else{
                    ans++;
                    a = s;
                    continue;
                }
            }
        }
    } else {
        cin >> s;
        cout << "1" << endl;
        return 0;
    }
    cout << ans << endl;
    return 0;    
}
