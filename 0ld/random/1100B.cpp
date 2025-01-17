#include<bits/stdc++.h>
using namespace std;
int main(){
    int n(0), m(0), k(0);
    cin >> n >> m >> k;
    int broken[n];
    int i(0);
    for(i = 0; i < n; i++) cin >> broken[i];
    int diffs[n-1];
    map<int, int> differences;
    for(i = 0; i < n-1; i++)
        differences[i+1] = broken[i+1] - broken[i];
    sort(differences.rbegin(), differences.rend());
    
    return 0;
    
}



/*
    if dist is too long use 1 piece
    if they are near use multi piece
    compare both near and multi and use whichever is the smallest
*/