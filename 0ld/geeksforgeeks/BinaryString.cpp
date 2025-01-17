{
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,count;
    string a;
    cin>>t;
    while(t--)
    {
        count = 0;
        cin >> n;
        cin >> a;
        
        cout << binarySubstring(n, a) << endl;
    }
}

}
long binarySubstring(int n, string a){
   long long counter = 0;
   for (int i = 0; i < n; i++)
       if (a[i] == '1')
           for(int j = i+1; j < n; j++)
               if(a[j] == '1')
                   counter++;
   return counter;
}



/*
  NEEDS TO BE OPTIMIZED
*/
