#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> getSneakyNumbers(vector<int>&);
int main()
{
  int size;
  cout<<"Size: ";
  cin>>size;
  vector<int> arr(size);
  cout<<"Enter elements: ";
  for(int &num: arr)
    cin>>num;

  vector<int> sneakyNumbers = getSneakyNumbers(arr);
  cout<<"Sneaky Numbers: ";
  for(int num: sneakyNumbers)
    cout<<num<<" ";

  cout<<endl;
  return 0;
}

vector<int> getSneakyNumbers(vector<int>& nums)
{
  vector<int> sneakyNumbers;
  unordered_map<int, int> freq;
  for(int num: nums)
    freq[num]++;

  for(auto it:freq)
    if(it.second==2)  sneakyNumbers.push_back(it.first);

  return sneakyNumbers;
}
