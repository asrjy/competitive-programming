/*#include<iostream>
using namespace std;
int main(){
	int n(0), v(0), p(0), i(0), q(0), j(0), k(0), x(0);
	cin >> n;
	int arr[n];
	for(i = 0; i < n; i++)
		cin >> arr[i];
	cin >> q;
	for(i = 0; i < q; i++){
		cin >> x;
		for(j = 0; j < n; j++){
			if(arr[j] == x){
				v += j+1;
				break;
			}
		}
		for(j = n-1, k= 0; j >= 0; j--, k++){
			if(arr[j] == x){
				p += k + 1;
				break;
			}
		}

	}
	cout << v << " " << p << endl;
	return 0;
}*/
#include<iostream>
using namespace std;
int main(){
	int n, x;
	cin >> n;
	int arr[100001];
	for(int i=0; i < n; i++){
		cin >> x;
		arr[x] = i+1;
	}
	int q;
	cin >> q;
	long long int v(0), p(0);
	while(q--){
		cin >> x;
		v += arr[x];
		p += (n + 1 - arr[x]);	
	}
	cout << v << " " << p << endl;
	return 0;
}
