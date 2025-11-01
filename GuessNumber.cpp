#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int guess(int);
int guessnumber(int);
int main()
{
    int n;
    cout<<"Guess the number: ";
    cin>>n;
    cout<<"The number is: "<<guessnumber(n)<<endl;
    return 0;
}
int guessnumber(int n)
{
  int low=1, high=n;
  while(1)
  {
    int mid= low+ (high-low)/2;

    int check= guess(mid);

    if(check==0)
    {
      return mid;
    }
    else if(check==1)
    {
      low=mid+1;
    }
    else
    {
      high=mid-1;
    }
  }
  return -1;
}

int guess(int num)
{
  srand(time(0));
  int n= rand()%3;
 
  if(num==n)
  {
    return 0;
  }
  else if(num<n)
  {
    return 1;
  }

    return -1;
  
}
