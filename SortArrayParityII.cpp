#include<iostream>
#include<vector>
using namespace std;
vector<int> sortArray(vector<int>&);
int main(){
  int n;
  cout<<"Size: ";
  cin>>n;
  vector<int> vec(n);
  cout<<"Enter elements: ";
  for(int &i:vec)
    cin>>i;

  vector<int> ans = sortArray(vec);
  cout<<"Sorted array: ";
  for(int i:ans)
    cout<<i<<" ";
  cout<<endl;

  return 0;
}
vector<int> sortArray(vector<int>& nums){
  vector<int> res,odd,even;
  for(int n:nums){
    if(n%2==0) even.push_back(n);
    else odd.push_back(n);
  }
 for(int i=0;i<even.size();i++){
    res.push_back(even[i]);
    res.push_back(odd[i]);
  }
  return res;
}
