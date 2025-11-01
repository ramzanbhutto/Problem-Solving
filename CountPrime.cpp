#include<iostream>
#include<vector>
using namespace std;
int countPrimes(int);
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The number of prime numbers less than "<<num<<" are: "<<countPrimes(num)<<endl;
    return 0;
}

int countPrimes(int n)
{
  if(n<=1) return 0;
  int count=0;
  vector<bool> isPrime(n,true);
  isPrime[0]=isPrime[1]=false;

  for(int i=1;i*i<n; i++)
  {
    if(isPrime[i]){
      for(int j=i*i; j<n; j+=i)
        isPrime[j]=false;
    }
  }

  for(int i=0; i<n; i++)
  {
    if(isPrime[i])
      count++;
  }
  return count;
}
