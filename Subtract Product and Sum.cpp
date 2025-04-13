#include<iostream>
using namespace std;
int subtractProductSum(int);
int main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  cout<<"The difference between the product and sum of digits of "<<num<<" is "<<subtractProductSum(num)<<endl;
  return 0;
}
int subtractProductSum(int n){
  int product=1,sum=0;
  while(n>0){
    product*=n%10;
    sum+=n%10;
    n/=10;
  }
  return product-sum;
}
