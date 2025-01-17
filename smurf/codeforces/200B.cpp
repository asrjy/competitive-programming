#include<iostream>
using namespace std;
int main(){
    int n, x, p(0);
    float f;
    cin >> n;
    for(int i = 0; i < n; i++){
	cin >> x;
	p += x;
    }
    f = (float)p/100;
    cout << (f/n)*100 << endl;
    return 0;
}
