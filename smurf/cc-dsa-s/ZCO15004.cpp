#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x_max(0), y_max(0), x_min(10000000), y_min(10000000) a, b;
    for(int i = 0; i<n; i++){
        cin >> a >> b;
        if(a > x_max)
            x_max = a;
        if(b > y_max)
            y_max = b; 
        if(a < x_min)
            x_min = a;
        if(b < y_min)
            y_min = b;
    }
    
}