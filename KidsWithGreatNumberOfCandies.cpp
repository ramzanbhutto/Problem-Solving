#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<bool> kidsWithCandies(vector<int>& , int );
int main()
{
  int s;
  cout<<"Enter the number of kids: ";
  cin>>s;
  vector<int> candies(s);
  cout<<"Enter the number of candies each kid has: ";
  for(int &i : candies)
    cin>>i;

  int extraCandies;
  cout<<"Enter the number of extra candies: ";
  cin>>extraCandies;

  vector<bool> result = kidsWithCandies(candies, extraCandies);
  cout<<"Result: ";
  for(bool b : result){
    if(b)
      cout<<"true ";
    else
      cout<<"false ";
  }
  cout<<endl;

  return 0;
}

vector<bool> kidsWithCandies(vector<int>& nums, int k){

  int maxe= *max_element(nums.begin(), nums.end());
  vector<bool> res;
  for(int c:nums ){
    if(c+k >= maxe) res.push_back(true);
    else res.push_back(false);
  }

  return res;
}
