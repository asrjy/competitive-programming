#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
    if(n/10 == 0)
        return n;
    else
        return n%10 + sumOfDigits(n/10);
}
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    cout<<sumOfDigits(n)<<endl;
	}
	return 0;
}
