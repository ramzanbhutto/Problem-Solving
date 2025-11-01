#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums, int val);
int main()
{
  int size;
  cout<<"Enter size: ";
  cin>>size;
  vector<int> vec1(size);
  
  cout<<"Enter elements of vector: ";
  for(int& i:vec1)
  cin>>i;

  int val;
  cout<<"Enter element to remove: ";
  cin>>val;

int s=  removeElement(vec1,val);

  cout<<"After removal total elements are: "<<s<<endl;
  cout<<"elements after removal of target are: ";
  for(int i=0;i<s;i++)
    cout<<vec1[i]<<" ";

  cout<<endl;
  return 0;
}

int removeElement(vector<int>& nums, int val) {
        
         
         vector<int> vec;
         for(int i=0;i<nums.size();i++)
           {
              if(nums[i]!=val)
                  vec.push_back(nums[i]);
              
           }

           nums.clear();
           nums=vec;
           return vec.size();
    }
