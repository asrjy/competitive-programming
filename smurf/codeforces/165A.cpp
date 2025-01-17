#include<iostream>
using namespace std;
int main(){
	int n, ans(0), a, b, lmin(1001), lmax(0), rmin(1001), rmax(0), i;
	cin >> n;
	int ln[1001], rn[1001], nums[n][2]; 
	for(i =0; i < n; i++){
		cin >> a >> b;
		if(a > lmax) lmax = a;
		if(a < lmin) lmin = a;
		if(b > rmax) rmax = b;
		if(b < rmin) rmin = b;
		ln[a] = 1, rn[b] = 1;
		nums[i][0] = a, nums[i][b] = b;
	}
	for(i = 0; i < n; i++){
		if((nums[i][0] < lmax && nums[i][0] > lmin && rn[nums[i][1]] == 1) && (nums[i][1] < rmax && nums[i][1] > rmin && 
		   ln[nums[i][0]] == 1)) ans++;
	}
	cout << ans << endl;
	return 0;
}

