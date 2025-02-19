#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define endl "\n"

vector<int> separateDigits(vector<int>& );
int main()
{
  int x;
  cout<<"Enter size of vector: ";
  cin>>x;

  vector<int> vec(x);
  cout<<"Enter elements of vector: ";
  for(int& i:vec)
  cin>>i;

  vector<int> res= separateDigits(vec);
  
  cout<<"Vector after seperated digits is: ";
  for(int& v:res)
   cout<<v<<" ";
  
  cout<<endl;

  return 0;
}

vector<int> separateDigits(vector<int>& nums)
{
  vector<int> result;

  for(int i=0;i<nums.size();i++)
  {
    int k=nums[i];
    vector<int> temp;
      while(k!=0){
       temp.push_back(k%10);
       k/=10;
     }
    reverse(temp.begin(),temp.end());
    result.insert(result.end(),temp.begin(),temp.end());
  }

  return result;
}

