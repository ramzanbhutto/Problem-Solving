#include<iostream>
using namespace std;
int differenceofSums(int ,int);
int main()
{
  int n,m;
  cout<<"Enter n: ";
  cin>>n;
  cout<<"Enter m: ";
  cin>>m;

  cout<<"Difference of sum of divisible and non-divisible numbers is: "<<differenceofSums(n,m)<<endl;

  return 0;
}

int differenceofSums(int n,int m)
{
  int sum1=0,sum2=0;
  for(int i=1;i<=n;i++)
  {
    if(i%m!=0)  sum1+=i;
    else  sum2+=i;
  }
  return sum1-sum2;
}
