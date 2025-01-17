#include<iostream>
#include<algorithm>
using namespace std;
/*int main(){
    int i, n, ans(0), temp(0);
    cin >> n;
    int kids[n];
    for(i=0; i <n; i++){
        cin >> kids[i];
    }
    sort(kids, kids+n);
    for(i = 0; i < n; i++)
        cout << kids[i] << endl;
    i = 0;
    while(i < n){
        temp += kids[i];
        if(temp = 4){
            temp = 0;
            ans++;
            i++;
            continue;
        } else if(temp > 4){
            temp = 0;
            ans++;
            continue;
        } else {
            i++;
            continue;
        }    
    }
    cout << ans;
    return 0;
}*/
int main(){
    int i, n, k1, k2, k3, k4, ans;
    cin >> n;
    int kids[n];
    for(i=0; i<n; i++){
        cin >> kids[i];
        if(kids[i]==1)
            k1++;
        else if(kids[i]==2)
            k2++;
        else if(kids[i]==3)
            k3++;
        else
            k4++;
    }
    ans = k4;
    if(k3 = k1){
        ans += k1;
        k1 = 0;
        k3 = 0;
    } else if(k3 > k1){
        ans += k1;
        k1 = 0;
        k3 -= k1;
    } else {
        ans += k3;
        k3 = 0;
        k1 -= k3;
    }
    if(k1 == 0)
        ans += k3;
    else {
        
    }
    /* 1111 112 13 22 4 */
    /* 4*/

}

