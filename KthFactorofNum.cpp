#include<iostream>
using namespace std;
int kthFactor(int ,int);
int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;
  int k;
  cout<<"Enter the kth factor: ";
  cin>>k;
  cout<<"The kth factor of "<<num<<" is: "<<kthFactor(num,k)<<endl;

  return 0;
}
int kthFactor(int n,int k){
  int i=1;
  while(i<=n){
    if(n%i==0){
      k--;
      if(k==0) return i;
    }
    i++;
  }

  return -1;
}
