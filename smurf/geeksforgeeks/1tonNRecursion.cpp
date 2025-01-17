#include <bits/stdc++.h>
using namespace std;
void printNos(int N);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        printNos(N);
        cout<<endl;
    }
    return 0;
}
void printNos(int n)
{   
    if(n==1){
        cout << n << " ";
    } else {
        printNos(n-1);
        cout << n << " ";
    }
}
