#include<iostream>
using namespace  std;
int trailingZeores(int);
int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  cout<<"The number of trailing zeroes in the factorial of "<<num<<" is: "<<trailingZeores(num)<<endl;
  
  return 0;
}
int trailingZeores(int n)
{
  int count=0;
  while(n>=5){
    n/=5;
    count+=n;
  }
  return count;
}
