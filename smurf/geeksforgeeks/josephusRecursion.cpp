#include <bits/stdc++.h>
using namespace std;
int josephus(int n, int k);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
    cout<<josephus(n,k)<<endl;
	}
	return 0;
}
int josephus(int n, int k)
{
   return n == 1 ? 1 : (k-1 + josephus(n - 1, k)) % n + 1;
}
