#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>&);
int main()
{
  int size;
  cout<<"Enter size of vector: ";
  cin>>size;

  vector<int> vec(size);
  cout<<"Enter elements of vector: ";
  for(int &i: vec)
  cin>>i;

  int j= removeDuplicates(vec);
  cout<<"Total elements after removal are: "<<j<<endl;

  cout<<"And they'are: ";
  for(int &i:vec)
  cout<<i<<" ";

  cout<<endl;

  return 0;
}

int removeDuplicates(vector<int>& vec)
{
  int count=1;
  for(int i=1;i<vec.size();i++)
  {
    if(vec[i]!=vec[i-1])
    {
      vec[count]=vec[i];
      count++;
    }
  }
 return count;
}
