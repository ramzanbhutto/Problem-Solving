#include<iostream>
#include<unordered_map>
using namespace std;

bool checkEqualOccurrences(const string s){
  unordered_map<char, int> freq;
  for(char ch:s) freq[ch]++;
  int firstFreq = freq.begin()->second; /* or use "int firstFreq = freq[s[0]];" */

  for(auto& pair : freq){
    if(pair.second != firstFreq) return false;
  }

  return true;
}

int main(){
  string str;
  cout<<"Enter a string: ";
  cin>>str;

  if(checkEqualOccurrences(str)) cout<<"All characters have equal occurrences."<<endl;
  else cout<<"Not all characters have equal occurrences."<<endl;

  return 0;
}
