// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int b(0), k(0);
//     cin >> b >> k;
//     int arr[k], temp(0);
//     if(k == 1) {
//         cin >> temp;
//         cout << "even" << endl;
//         return 0;
//     }
//     for(int i = 0; i < k; i++) cin >> arr[i];
//     long long sum(0), x(0);
//     for(int i = k-1; i >= 0; i--){
//         x = (arr[k-1-i]*pow(b, i));
//         sum += x;
//     }
//     if(sum & 1) cout << "odd" << endl;
//     else cout << "even" << endl;
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int main(){
    int b(0), k(0);
    cin >> b >> k;
    int arr[k];
    for(int i = 0; i < k; i++)
        cin >> arr[i];
    long long sum(0), x(0);
    for(int i = k-1; i >= 0; i--){
        if(arr[k-1-i]%2==0)
            arr[k-1-i]=0;
        else 
            arr[k-1-i]=1;
        b%=2;
        x = (arr[k-1-i]*pow(b, i));
        sum += x;
    }
    if(sum & 1)
        cout << "odd" << endl;
    else 
        cout << "even" << endl;
    return 0;
}