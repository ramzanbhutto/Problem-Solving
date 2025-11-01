#include<iostream>
#include<vector>
using namespace std;
int arraySign(vector<int>&);
int main()
{
  int s;
  cout<<"Enter the size of the array: ";
  cin>>s;
  vector<int> v(s);
  cout<<"Enter the elements of the array: ";
  for(int &i: v)
    cin>>i;

  cout<<"The sign of the product of the array is: "<<arraySign(v)<<endl;

  return 0;
}

int arraySign(vector<int>& nums)
{
  int sign=1;
  for(int &n:nums)
  {
    if(n==0)
      return 0;
    else if(n<0)
        sign*=-1;
  }

  return sign;
}
