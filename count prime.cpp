#include<iostream>
using namespace std;
int countPrimes(int);
int main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  cout<<"There are "<<countPrimes(num)<<" Prime numbers below "<<num<<endl;

  return 0;
}

int countPrimes(int n)
{
  if(n<=1)
    return 0;

  int vec[n],x=0;
  
  for(int i=1;i<n;i++)
    vec[x++]=i;

  int total=0,count=0,factors=2;

  for(int i=0;i<x;i++)
  {
    count=0;
    for(int j=1;j<=vec[i];j++)
    {
      if(vec[i]%j==0)
        count++;
    }

    if(count==factors)
      total++;
  }

  return total;
}
