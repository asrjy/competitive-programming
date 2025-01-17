#include<iostream>
#include<vector>
using namespace std;
int main(){
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
    	int n(0), target(0), temp(0);
	cin >> n >> target;
	int flag = 0;
	vector < int > arr;
	for(int i = 0; i < n; i++){
	    cin >> arr[i]; 
	}
	for(int i = 0; i < n; i++){
	    if(flag == 1){
	    	break;
	    }
	    temp = arr[i];
	    for(int j = i+1; j < n; j++){
	        if((temp + arr[j]) == target){
		   cout << i+1 << " " << j+1 << endl;
		}
		else if((temp + arr[j]) > target){
		    break;
		} 
		else if((temp + arr[j]) < target){
		    temp += arr[j];
		}
	    }
	    if(i == n-1 && flag == 0){
	    	cout << -1 << endl;
	    }
	}
    }
    return 0;
}
