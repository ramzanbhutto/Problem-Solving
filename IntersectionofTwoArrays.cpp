#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

 vector<int> intersection(vector<int>& , vector<int>& );
int main()
{
  ios_base::sync_with_stdio(false);

  int size1;
  cout<<"Size 1: ";
  cin>>size1;
  int size2;
  cout<<"Size 2: ";
  cin>>size2;

  vector<int> vec1(size1), vec2(size2);

  cout<<"1st Vector: ";
  for(int &v1:vec1)
  cin>>v1;

  cout<<"2nd Vector: ";
  for(int &v2: vec2)
  cin>>v2;

  vector<int> intersect= intersection(vec1,vec2);
  cout<<"intersection of both vectors is: ";
  for(int &r:intersect)
  cout<<r<<" ";

  cout<<endl;

 return 0;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
 unordered_set<int> set1(nums1.begin(),nums1.end());
 //unordered_set<int> set2;
 
  vector<int> result;
  for(int num: nums2){
    if(set1.count(num)){
     result.push_back(num);
      set1.erase(num);
    }
  }
  //vector<int>result(set2.begin(),set2.end());

  return result;
}
