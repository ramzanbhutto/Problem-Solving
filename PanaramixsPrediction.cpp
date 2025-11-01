#include<iostream>
using namespace std;

bool isNearPrime(int,int);
bool isPrime(int);
int main(){
  int m,n;
  cin>>m>>n;
  
  if(n<2) cout<<"NO"<<endl;
  else if(isNearPrime(m,n)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

  return 0;
}

bool isNearPrime(int m,int n){
  for(int i=m+1;i<=n;i++){
    if(isPrime(i)){
      if(i==n) return true;
      else return false;
    }
  }
  return false;
}

bool isPrime(int n){
  if(n<2) return false;
  for(int i=2;i*i<=n;i++) if(n%i==0) return false;

  return true;
}
