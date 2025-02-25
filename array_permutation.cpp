#include<iostream>
#include <vector>
#include<limits>
using namespace std;
vector<int> buildArray(vector<int>&);
int main()
{
  ios_base::sync_with_stdio(false);

  int size;
  cout<<"Size: ";
  cin>>size;

  if(cin.fail() || size<=0){
    cerr<<"Invalid size"<<endl;
    return -1;
   }

  vector<int>vec(size);
  cout<<"Elements: ";
  for(int &v:vec)
    cin>>v;

  if(cin.fail()){
    cerr<<"Invalid input"<<endl;
    return -1;
  }

 cin.ignore(numeric_limits<streamsize>::max(),'\n');

 cout<<"Vector built from Permutation is: ";
 vector<int>ans= buildArray(vec);
  for(int &v:ans)
  cout<<v<<" ";
   cout<<endl;

return 0;
}
vector<int> buildArray(vector<int>&nums)
{
  vector<int>v;
  for(int i=0;i<nums.size();i++)
    v.push_back(nums[nums[i]]);

  return v;
}
