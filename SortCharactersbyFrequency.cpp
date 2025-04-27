#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

string frequencySort(string );
int main()
{
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  cout<<"Sorted string by frequency of characters: "<<frequencySort(str)<<endl;
  return 0;
}

string frequencySort(string s){
  
  unordered_map<char,int>map;
  for(auto ch: s)
    map[ch]++;

  vector<pair<char,int>> freq(map.begin(),map.end());

  sort(freq.begin(),freq.end(), [](auto &a, auto &b){
    return a.second > b.second;  /* sort in descending order */
  });

  string res;
  for(auto p:freq)
   res+= string(p.second,p.first);   /* or res.append(p.second,p.first); */

  return res;
}
