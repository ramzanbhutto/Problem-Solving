#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
#define endl "\n"

int degreeVector(vector<int>&);
int main()
{
  int x;
  cout<<"Enter size of vector: ";
  cin>>x;
  vector<int> vec(x);
  cout<<"Enter elements: ";
  for(int &v:vec)
  cin>>v;

  cout<<"Maximum degree of vector is: "<<degreeVector(vec)<<endl;
  
  return 0;
}

int degreeVector(vector<int>& v)
{
  vector<int>count(v.size(),0);

  for(int i=0;i<v.size();i++)
  {
    for(int j=0;j<v.size();j++)
    {
      if(v[i]==v[j])
        count[i]++;
    }
  }

  return *max_element(count.begin(),count.end());
}
