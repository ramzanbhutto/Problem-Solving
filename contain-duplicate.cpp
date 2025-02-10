#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool containsDuplicate(vector<int>& );

int main()
{
  int size;
  cout<<"Enter size: ";
  cin>>size;
  
  vector<int>vec(size);
  cout<<"Enter elements of vector: ";
  for(int& i:vec)
  cin>>i;
  
  if(containsDuplicate(vec))
    cout<<"true"<<endl;
  else 
    cout<<"false"<<endl;

  return 0;
}

bool containsDuplicate(vector<int>& vec)
{
  sort(vec.begin(),vec.end());

  for(int i=1;i<vec.size();i++)
  {
    if(vec[i]==vec[i-1])
      return true;
  }

  return false;
}
