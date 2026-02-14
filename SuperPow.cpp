#include<iostream>
#include<vector>
using namespace std;

using ll=long long;
const int MOD=1337;
const int TolerFunction=1140;

/*
  As the length of b is 1<=b.length<=2000 , so a number with 2000 digits can't be calculated easily. So, for that I had taken the Euler's totient function of 1337  which is defined MOD in this problem. The calculation is as followings:
  φ(n)=n*((1-1/prime1)*(1-1/prime2))
where prime1 and prime2 are the factors of MOD which is 1337
**The 1st factor is 7(prime1), and the 2nd factor is 191(prime2)** and both factors are prime, and n is itself MOD. So just plugin values in the formula

  φ(1337)= 1337*((1-1/7)*(1-1/191))
  φ(1337)= 1337*((6/7)*(190/7))
  φ(1337)= 1140

The value of Euler's totient function φ(1337) is 1140. The calculation is based on the prime factorization of 1337.
This means there are 1140 positive integers <=1337 that are coprime to 1337 (share no common factors other than 1).
*/

int SuperPow(int a, vector<int>& b){
  if(a==1) return 1;
  ll pow=0LL;
  for(int i:b){
    pow= (pow*10LL+(1LL*i))%TolerFunction;
  }
  if(pow==0LL) pow=static_cast<ll>(TolerFunction);

  ll res=1LL;
  ll base=static_cast<ll>(a);
  base= base%MOD;
  while(pow){
    if(pow&1LL) res=(res*base)%MOD;
    base=(base*base)%MOD;
    pow>>=1LL;
  }

  return static_cast<int>(res);
}

int main(){
  int a,n;
  cout<<"Enter base of power: ";
  cin>>a;
  cout<<"Enter size of exponent array: ";
  cin>>n;
  vector<int> b(n);
  cout<<"Enter exponent array: ";
  for(int &i:b) cin>>i;

  cout<<"Result: "<<SuperPow(a,b)<<endl;

  return 0;
}
