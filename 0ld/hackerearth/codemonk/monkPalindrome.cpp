#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases(0);
    cin >> test_cases;
    string palornot, temp;
    while(test_cases--){
        cin >> palornot;
        temp = palornot;
        reverse(temp.begin(), temp.end());
        if(temp == palornot){
            if(temp.size() & 1){
                cout << "YES ODD" << endl;
            } else {
                cout << "YES EVEN" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}