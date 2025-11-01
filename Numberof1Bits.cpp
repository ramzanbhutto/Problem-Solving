#include<iostream>
using namespace std;
int hammingweight(int);
int main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  cout<<"The number of 1 bits in the binary representation of "<<num<<" is: "<<hammingweight(num)<<endl;
  return 0;
}
int hammingweight(int n){
  int count=0;
  while(n>0){
    count+= n%2;
    n/=2;
  }
  return count;
}
