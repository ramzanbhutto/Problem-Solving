#include<iostream>
#include<vector>
using namespace  std; 
int searchInsert(vector<int>& ,int);
int main()
{
  int size;
  cout<<"Enter size of vector: ";
  cin>>size;

  vector<int> vec(size);

  cout<<"Enter elements of vector: ";
  for(int& i:vec)
  cin>>i;

  int target;
  cout<<"Enter target: ";
  cin>>target;

  cout<<"The Search Insert Position is: "<<searchInsert(vec,target)<<endl;

  return 0;

}

int searchInsert(vector<int>& vec, int target)
{
  for(int i=0;i<vec.size();i++)
  {
    if(vec[i]==target || vec[i]>target)
      return i;
    else if(vec[i]<target && i==vec.size()-1)
      return ++i;
  }

  return -1;
}
