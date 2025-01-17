#include<iostream>
using namespace std;
int rev_num(int og){
    int out(0);
    while(og){
	out *= 10;
	out += og%10;
	 og /= 10;
    }
    return out;
}
int main(){
    int n(0), og(0);
    cin >> n;
    while(n--){
	cin >> og;
	cout << rev_num(og) << endl;
    }
    return 0;
}
