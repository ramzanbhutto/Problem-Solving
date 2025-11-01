#include<iostream>
#include<vector>
using namespace std;
int countDigits(int);
int main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;

  cout<<"The total digits that divide this number are: "<<countDigits(num)<<endl;

  return 0;
}

int countDigits(int n)
{
  int store=n;
  vector<int> vec;
  while(n!=0)
  {
    vec.push_back(n%10);
    n/=10;
  }
  int count=0;
  for(int &digit:vec)
  {
    if(store%digit==0)
      count++;
  }

  return count;
}
