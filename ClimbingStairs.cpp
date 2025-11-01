#include<iostream>
using namespace std;
#define endl "\n"

int climbStairs(int);
int main()
{
  int steps;
  cout<<"Enter steps: ";
  cin>>steps;
  
  cout<<"There are "<<climbStairs(steps)<<" ways to climb to the top"<<endl;

  return 0;
}

int climbStairs(int n)
{
  if(n<=2)
    return n;

  long long first=1,second=2;
  while(n>=3)
  {
    long long temp=first+second;
    first=second;
    second=temp;
    n--;
  }

  return second;

}
