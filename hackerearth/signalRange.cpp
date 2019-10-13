// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     int t(0);
//     cin >> t;
//     while(t--){
//         int n(0), i(0), j(0), counter(0), temp(0);
//         cin >> n;
//         int towers[n], anss[n];
//         for(i = 0; i < n; i++) cin >> towers[i];
//         for(i = 0; i < n; i++){
//             for(j = 0; j < i; j++){
//                 if(towers[j] < towers[i]){
//                     counter++;
//                 }
//             }
//             anss[i] = counter + 1;
//             counter = 0;
//         }
//         for(auto ans : anss) cout << ans << " ";
//         cout << "\n";
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t(0); cin >> t;
    while(t--){
        int n(0), i(0), j(0);
        cin >> n;
        stack <int> towers;
        for(i = 0; i < n; i++){
            cin >> j;
            towers.push(j);
        }

    }

}