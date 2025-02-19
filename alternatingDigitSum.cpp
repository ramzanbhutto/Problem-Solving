#include<bits/stdc++.h>
using namespace std;
int alternateDigitSum(int);
int main()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  cout<<"Sum of it's alternating digits is: "<<alternateDigitSum(num)<<endl;

  return 0;
}

int alternateDigitSum(int n)
{
  vector<int> vec;
  
  while(n!=0){
    vec.push_back(n%10);
    n/=10;
  }
 
  reverse(vec.begin(),vec.end());
  int sum=0;
  for(int i=0;i<vec.size();i++)
  {
    if(i%2==0)
      sum+=vec[i];
    else
      sum-=vec[i];
  }

  return sum;
}
