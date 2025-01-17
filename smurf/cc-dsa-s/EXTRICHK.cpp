#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (((a+b)>c) && ((a+c)>b) && ((c+b)>a)){
        if(a == b && a == c)
            cout << 1 << endl;
        else if (a == b || a == c || b == c)
            cout << 2 << endl;
        else if (((a*a) == ((b*b) + (c*c))) || ((b*b) == ((a*a) + (c*c))) || ((c*c) == ((b*b) + (a*a))))
            cout << -1 << endl;
        else 
            cout << 3 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}