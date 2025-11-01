#include<iostream>
using namespace  std;
#define endl "\n"
int addDigits(int);
int main()
{
 int num;
  cout<<"Enter a number: ";
  cin>>num;

  cout<<"Sum of its digits is: "<<addDigits(num)<<endl;
 return 0;
}
int addDigits(int n)
{
  int sum;
  while(n>=10){
    sum=0;
    while(n!=0){
      sum+=n%10;
      n/=10;
    }
    n=sum;
  }

  return sum;
}
