/*
* Author: Muhammad Ramzan
* Created on: 10-Feb-2026  01:57 AM
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

unordered_map<string,int> dict;
bool precomputed=false;

void precompute(){
  if(precomputed) return;

  for(char i='a';i<='z';i++){
    for(char j='a';j<='z';j++){
      if(i!=j){
        string word="";
        word.push_back(i);
        word.push_back(j);
        dict[word]=int(dict.size())+1;
      }
    }
  }
  precomputed=true;
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  precompute();

  int t;
  cin>>t;
  while(t--){
    string word;
    cin>>word;
    cout<<dict[word]<<endl;
  }

  return 0;
}
