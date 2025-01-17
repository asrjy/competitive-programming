#include<bits/stdc++.h>
using namespace std;
long long return_sum(long long num){
  long long sum(0);
  while (num != 0)
  {
    sum = sum + num % 10;
    num = num / 10;
  }
  return sum;
}
bool isPrime(long long n) 
{ 
  if (n <= 1)  return false; 
  if (n <= 3)  return true; 
  if (n%2 == 0 || n%3 == 0) return false; 
  for (long long i=5; i*i<=n; i=i+6) 
    if (n%i == 0 || n%(i+2) == 0) 
      return false; 
  return true; 
} 
int main(){
  long long a(0), b(0), k(0), i(0), counter(0);
  cin >> a >> b >> k;
  for(i = a; i < b+1; i++){
    if((i%k)==0){
      if(isPrime(return_sum(i))){
        counter++;
      }
    }
  }
  cout << counter << endl;
  return 0;
}
