#include<iostream>
#include<math.h>
#define endl "\n"
using namespace std;
int main(){
    int i, n, m, fg(0);
    cin >> m >> n;
    for(i=m+1; ;i++){
	for(int j = 2; j <= sqrt(i);j++){
	    if(i%j==0){
		fg = 1;
		break;
	    }
	}
	if(fg == 0){
	    if(i == n)
		cout << "YES" << endl;
	    else
		cout << "NO" << endl;
	    return 0;
	} else fg=0;
    }
    cout << "NO" << endl;
    return 0;
}
