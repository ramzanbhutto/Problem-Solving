#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 
vector<int> findDuplicates(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> vec(size);
  cout<<"Enter elements: ";
  for(int&v:vec)
    cin>>v;

  vector<int> res = findDuplicates(vec);
  cout<<"Duplicates: ";
  for(int&v:res)
    cout<<v<<" ";

  cout<<endl;

  return 0;
}
 vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>map;

        for(int n:nums)
         map[n]++;

         vector<int>res;

         for(int i:nums){
            if(map[i]==2){
             res.push_back(i);
             map.erase(i);
         }
         
    }
    return res;
    }
