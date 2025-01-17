#include<iostream>
using namespace std;
int main(){
    int l0(0), l1(0), r0(0), r1(0), a, b, n, ii, l, r;
    cin >> n;
    for(int i =0 ; i < n; i++){
	cin >> a >> b;
	if(a==0)
	    l0++;
	else
	    l1++;
	if(b==0)
	    r0++;
	else 
	    r1++;
    }
    l0 > l1 ? l = l0 : l = l1;
    r0 > r1 ? r = r0 : r = r1;
    cout << (2*n - l - r) << endl;
    return 0;
}
