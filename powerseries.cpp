#include<iostream>
using namespace std;
using ll = long long;

ll power(ll n, ll x){
  ll res=1;
  for (ll i=0; i<x; i++){
    res*=n;
  }

  return res;
}

ll factorial(ll n){
  if(n<0) return 0;
  if (n==0 || n==1)  return 1;
  ll res=1;
  for(ll i=2; i<=n; i++){
    res*=i;
  }
  return res;
}

int main(){
  ll num;
  cout<<"Enter a number: ";
  cin>>num;
  
  if(num<0){
    cout<<"Negative number entered, cannot calculate power series."<<endl;
    exit(0);
  }

  long double sum=0;
  for (ll i=0;i<num;i++){
    ll numerator= power(num,i+1);
    ll denominator= factorial(i*2);
    if(!denominator){
      cout<<"Denominator is zero, cannot divide by zero."<<endl;
      exit(0);
    }
    sum+= (long double)numerator/denominator;
  }
  cout<<"The sum of the series is: "<<sum<<endl;

 /* second method (same)
  long double sum2=0;
  for (ll i=1,j=0;i<=num;i++,j+=2){
    sum2+= (long double)power(num,i)/factorial(j);
  }
 cout<<"The sum of the series is: "<<sum2<<endl;
  */
  return 0;
}
