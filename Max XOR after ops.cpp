#include<iostream>
#include<vector>
using namespace std;
int maximumXOR(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> vec(size);
  for(int &n:vec) 
    cin>>n;

  cout<<"Maximum XOR after Operations: "<<maximumXOR(vec)<<endl;
  return 0;
}
int maximumXOR(vector<int>& nums){
  int res=0;
  for(int n:nums)
    res|=n;

  return res;
}
