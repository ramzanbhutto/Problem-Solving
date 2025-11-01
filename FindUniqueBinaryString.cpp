#include<iostream>
#include<vector>
using namespace std;
string findStr(vector<string>&);
int main(){
  int n;
  cout<<"Enter the number of strings: ";
  cin>>n;
  vector<string> str(n);
  cout<<"Enter the strings: ";
  for(string &s: str) cin>>s;

  cout<<"The unique binary string is: "<<findStr(str)<<endl;
  return 0;
}
string findStr(vector<string>& nums){
  
  string ans;

  for(int i=0;i<nums.size();i++) 
    ans+= (nums[i][i]=='0'?'1':'0'); //if the ith character of the ith string is '0', then we put '1' in the ith position of the answer string, otherwise we put '0'.

  return ans;
}
