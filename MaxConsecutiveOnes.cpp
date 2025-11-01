#include<iostream>
#include<vector>
using namespace std;
int findMaxConsecutive(vector<int>& );
int main()
{
  int s;
  cout<<"Size: ";
  cin>>s;
  vector<int> vec(s);
  cout<<"Elements as 1's and 0's: ";
  for(int &i:vec)
   cin>>i;

  cout<<"Max Consecutive Ones in the array are: "<<findMaxConsecutive(vec)<<endl;
  return 0;
}
int findMaxConsecutive(vector<int>& nums){
  int count=0, maxCount=0;
  for(int n:nums){
    if(n==1){
      count++;
      maxCount=max(maxCount,count);
    }
    else 
      count=0;
  }

  return maxCount;
}
