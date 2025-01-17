#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, ans;
    cin >> m >> n;
    int puz[n];
    for(int i=0; i<n; i++)
        cin >> puz[i];
    sort(puz, puz+n);
    ans = puz[m-1]-puz[0];
    cout << ans << endl;
    return 0;
}
