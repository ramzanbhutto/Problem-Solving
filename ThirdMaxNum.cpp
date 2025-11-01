#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int thirdMax(vector<int>& );
int main()
{
  int s;
  cout<<"Size: ";
  cin>>s;
  vector<int> vec(s);
  cout<<"Enter elements: ";
  for(int &v:vec)
    cin>>v;

  cout<<"Third Max in the array is: "<<thirdMax(vec)<<endl;

  return 0;
}

int thirdMax(vector<int>& nums)
{
  long first=LONG_MIN, second=LONG_MIN, third=LONG_MIN;

  for(int &n:nums)
  {
    if(n>first)
    {
      third=second;
      second=first;
      first=n;
    }
    else if(n>second && n<first)
    {
      third=second;
      second=n;
    }
    else if(n>third && n<second)
      third=n;
  }

  if(third==LONG_MIN)
    return first;

  return third;
}
