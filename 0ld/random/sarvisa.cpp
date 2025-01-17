#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    int i,j,a[n],sum=0;
    for(i=0,j=n-1;i<n&&j>=-1;i++,j--){
        cin>>a[i];
        sum = sum + (a[i]*pow(k,j));
    }
    // if(sum%2==0)
    // cout<<"even";
    // else
    // cout<<"odd";
    cout<<sum;
    return 0;
}