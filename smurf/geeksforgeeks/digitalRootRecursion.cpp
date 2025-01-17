#include <iostream>
using namespace std;
int digitalRoot(int n)
{   
    int ans=0;
    if(n < 9) return n;
    else ans =  n%10 + digitalRoot(n/10);
    if(ans > 9) digitalRoot(ans);
    else return ans;
}
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    cin>>n;
	    cout<<digitalRoot(n)<<endl;
	}
	return 0;
} 
