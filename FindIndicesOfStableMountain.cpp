#include<iostream>
#include<vector>
using namespace std;
vector<int> Mountain(vector<int>&, int);

int main()
{
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  vector<int> heights(n);
  cout<<"Enter the heights of the mountains: ";
  for(int &i:heights)
  {
    cin>>i;
  }
  
  int threshold;
  cout<<"Enter the threshold: ";
  cin>>threshold;

  vector<int> result = Mountain(heights, threshold);
  cout<<"Indices of stable mountains: ";
  for(int i:result)
  {
    cout<<i<<" ";
  }
  cout<<endl;

  return 0;
}

vector<int> Mountain(vector<int>& nums, int k){
  
  vector<int> res;
  for(int i=0; i<nums.size()-1; i++){
    if(nums[i] > k){
      res.push_back(i+1);
    }
  }

  return res;
}
