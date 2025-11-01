#include <ios>
#include<iostream>
#include<vector>
using namespace std;
#define vec vector<int>

vec productExceptSelf(vec&);
int main()
{
  ios_base::sync_with_stdio(false);
//  cin.tie(NULL);

  int size;
  cout<<"Size: ";
  cin>>size;

  vec product(size);
  cout<<"Enter elements: ";
  for(int& v:product)
   cin>>v;

  vec result = productExceptSelf(product);

  cout<<"Product of array Except itself is: ";
  for(int& v:result)
   cout<<v<<" ";
  cout<<endl;

  return 0;
}

vec productExceptSelf(vec& nums)
{
  int n=nums.size();
  
  vector<int> ans(n,1);
 
  int prefix=1;
  for(int i=0;i<n;i++){
    ans[i]=prefix;
    prefix*=nums[i];
  }

  int suffix=1;
  for(int j=n-1;j>=0;j--){
    ans[j]*=suffix;
    suffix*=nums[j];
  }
  return ans;
}
