// // #include<bits/stdc++.h>
// // using namespace std;
// // // iterate over row and iterate over column
// // int main(){
// //     int t(0);
// //     cin >> t;
// //     while(t--){
// //         cout << "-----------------" << endl;
// //         int n(0), i(0), j(0), counter(0);
// //         cin >> n;
// //         int arr[n][n];
// //         for(i = 0; i < n; i++)
// //             for(j = 0; j < n; j++)
// //                 cin >> arr[i][j];
// //         int rcurr(0), ccurr(0);
// //         i = 0; j = 0;
// //         // Iterating over the row
// //         // 0,0 -> 0,1 0,2 0,3
// //         // 0,1 -> 0,2 0,3
// //         // 0,2 -> 0,3
// //         cout << "ROW" << endl;
// //         for(i = 0; i < n; i++){
// //             rcurr = arr[i][j];
// //             cout << rcurr << endl;
// //             for(j = i; j < n; j++){
// //                 if(arr[i][j] > rcurr) counter++;
// //                 cout << i << " " << j << endl;
// //             }
// //         }
// //         // Iterating over the columns
// //         // 0,0 -> 1,0 2,0 3,0
// //         // 1,0 -> 2,0 3,0
// //         // 2,0 -> 3,0
// //         i = 0;j = 0;
// //         cout << "COLUMN" << endl;
// //         for(i = 0; i < n; i++){
// //             ccurr = arr[j][i];
// //             cout << ccurr << endl;
// //             for(j = i; j < n; j++){
// //                 if(arr[j][i] > ccurr) counter++;
// //                 cout << j << " " << i << endl;
// //             }
// //         }
// //         cout << "\n Answer " << counter << endl;
// //         counter = 0; rcurr = 0; ccurr = 0;
// //     }
// //     return 0;
// // }


// #include<iostream>
// using namespace  std;
// int main(){
//     int t(0);
//     cin >> t;
//     while(t--){
//         int n(0), i(0), j(0);
//         cin >> n;
//         int arr[n][n];
//         for(i= 0; i < n; i++){
//             for(j = 0; j < n; j++){
//                 cin >> arr[i][j];
//             }
//         }
//     }
// }
#include<iostream>
using namespace std;

int main()
{int t(0),n(0);
    cin>>t;
    while(t--)
    {
        cin>>n;int a[n][n]={0};
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        
int count=0;
    for(int p=0;p<n;p++)
    for(int q=0;q<n;q++)
    for(int i=0;i<=p;i++)
    for(int j=0;j<=q;j++)
    {
        if(a[i][j]>a[p][q])
        {
            count+=1;
        }
    }
            cout<<count<<endl;
        
    }
}