#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,x(0);
    cin >> a >> b >> c >> d;
    if(a==b && x <=2) x++;
    if(b==c && x <=2) x++;
    if(c==d && x<=2) x++;
    if(a==d && x<=2) x++;
    if(a==c && x<=2) x++;
    if(b==d && x<=2) x++;
    cout << x << endl;
    return 0;
}
