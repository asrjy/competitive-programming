#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int a1[26]={0}, a2[26]={0}, i;
    for(i = 0; i < s1.length(); i++)
	a1[int(s1[i])-65]++;
    for(i = 0; i < s2.length(); i++)
	a1[int(s2[i])-65]++;
    for(i = 0; i < s3.length(); i++)
	a2[int(s3[i])-65]++;
    for(i = 0; i < 26; i++)
	if(a1[i] != a2[i]){
	    cout << "NO" << endl;
	    return 0;
	}
    cout << "YES";
    return 0;
}
