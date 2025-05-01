#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> numberGame(vector<int>&);
int main()
{
  int n;
  cout<<"Size: ";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter the elements: ";
  for(int &i:arr)
    cin>>i;

  vector<int> result = numberGame(arr);  /* only used because of 1st approach */
  cout<<"Result: ";
  for(int i:result)
    cout<<i<<" ";
  cout<<endl;

  return 0;
}

vector<int> numberGame(vector<int>& nums){
 /*
        vector<int> ans;
        while(!nums.empty()){
            auto x= *min_element(nums.begin(),nums.end());
            auto id1=find(nums.begin(),nums.end(),x) - nums.begin();
            nums.erase(nums.begin()+id1);

            auto y= *min_element(nums.begin(),nums.end());
            auto id2=find(nums.begin(),nums.end(),y) - nums.begin();
            nums.erase(nums.begin()+id2);

            ans.push_back(y);
            ans.push_back(x);
        }
        return ans;
*/
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=2)
            swap(nums[i],nums[i-1]);
        

        return nums;
}
