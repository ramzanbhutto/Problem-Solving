#include<iostream>
#include<unordered_map>
using namespace std;
int maxDifference(string );
int main()
{
  string str;
  cout<<"Enter the string: ";
  cin>>str;
  cout<<"Maximum difference between even and odd frequency is: "<<maxDifference(str)<<endl;

  return 0;
}
int maxDifference(string s)
{
  unordered_map<char, int> freq;
  for(char &ch:s)  freq[ch]++;

  int odd=0, even=s.size();

  for(auto &p:freq)
  {
    if(p.second%2)  odd= max(odd, p.second);
    else    even= min(even, p.second);
  }

  return odd-even;
}
