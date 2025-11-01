#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrange(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> arr(size);
  cout<<"Enter elements: ";
  for(int &i:arr) cin>>i;

  vector<int> res=rearrange(arr);
  cout<<"Rearranged array: ";
  for(int i:res) cout<<i<<" ";
  cout<<endl;
  return 0;
}
vector<int> rearrange(vector<int>& nums)
{
  vector<int> pos,neg,res;
        for(int n:nums){
            if(n>=0) pos.push_back(n);
            else  neg.push_back(n);
        }
        for(int i=0;i<pos.size();i++){
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }

        return res;
    }
