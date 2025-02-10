#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingNum(vector<int>& );
int main()
{
   int size;
  cout<<"Enter size: ";
  cin>>size;
  
  vector<int>vec(size);
  cout<<"Enter elements of vector: ";
  for(int& i:vec)
  cin>>i;

  cout<<missingNum(vec)<<" is Missing"<<endl;

  return 0;
}

int missingNum(vector<int>& vec)
{
  sort(vec.begin(),vec.end());

  if(vec[0]!=0)
    return 0;

  for(int i=1;i<vec.size();i++)
  {
    if(vec[i-1]+1 != vec[i])
      return vec[i-1]+1;
  }

  return vec[vec.size()-1]+1;

}

