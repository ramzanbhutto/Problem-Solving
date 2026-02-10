#include<iostream>
#include<iomanip>
using namespace std;

using ll = long long;
using ld = long double;

ld findSqrt(ll num){
  if(num==0 || num==1) return num;

  ll low=0, high=num;
  while(low<=high){
    ll mid= low+(high-low)/2;
    ll midSq= mid*mid;
    if(midSq==num) return static_cast<ld>(mid);
    else if(midSq<num) low= mid+1;
    else high= mid-1;
  }

  // At this point, high is the largest integer such that high^2 <= num
  // We can use high as the integer part of the square root and refine it for the decimal part
  ld sqrtIntPart = static_cast<ld>(high);
  ld increment = 0.1;
  for(int i=0; i<10; i++){
    while(sqrtIntPart*sqrtIntPart <= num){
      sqrtIntPart += increment;
    }
    sqrtIntPart-= increment; // Step back to the last valid value
    increment/= 10; // Move to the next decimal place
  }

  return sqrtIntPart;
}

int main(){
  ios_base::sync_with_stdio(false);

  ll num;
  cout<<"Enter a number: ";
  cin>>num;

  ld res= findSqrt(num);
  cout<<"Square root of "<<num<<" is approximately: "<<fixed<<setprecision(10)<<res<<endl;

  return 0;
}
