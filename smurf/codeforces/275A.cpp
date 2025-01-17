#include<iostream>
using namespace std;
int main(){
    int i, j, n, tot(0);
    int inps[9];
    for(i = 0; i < 9; i++){
	cin >> inps[i];
	if(inps[i]%2 == 0)
	    inps[i] = 0;
	else{
	    inps[i] = 1;
	    tot++;
	}
    }
    ((inps[0]+inps[1]+inps[3])%2==0) ? cout << 1 : cout << 0;
    ((tot-inps[6]-inps[7]-inps[8]-inps[3]-inps[5])%2==0) ? cout << 1 : cout << 0;
    ((inps[1]+inps[2]+inps[5])%2==0) ? cout << 1 << endl : cout << 0 << endl;
    ((tot-inps[2]-inps[5]-inps[8]-inps[1]-inps[7])%2==0) ? cout << 1 : cout << 0;
    ((tot-inps[0]-inps[2]-inps[6]-inps[8])%2==0) ? cout << 1 : cout << 0;
    ((tot-inps[3]-inps[0]-inps[6]-inps[1]-inps[7])%2==0) ? cout << 1 << endl : cout << 0 << endl;
    ((inps[3]+inps[6]+inps[7])%2==0) ? cout << 1 : cout << 0;
    ((tot - inps[0]-inps[1]-inps[2]-inps[3]-inps[5])%2==0) ? cout << 1 : cout << 0;
    ((inps[5]+inps[7]+inps[8])%2==0) ? cout << 1 << endl : cout << 0 << endl;
    return 0;   
}
