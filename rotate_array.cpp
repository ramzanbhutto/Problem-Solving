#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>& , int );
int main()
{
  int size;
  cin>>size;
  vector<int> nums(size);
  for(int &i: nums)
  cin>>i;

  int k;
  cin>>k;

  rotate(nums,k);
  for(int &i: nums)
  cout<<i<<" ";

  cout<<endl;

return 0;
}
void rotate(vector<int>& num, int k)
{
  int s=num.size();
    
  reverse(num.begin(),num.end());
  
  reverse(num.begin(),num.begin()+k%s);

  reverse(num.begin()+k%s,num.end());

  //for(int &i: num)
  //cout<<i<<" ";

  //cout<<endl;

}
