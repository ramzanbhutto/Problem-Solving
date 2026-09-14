/*
* Author: Muhammad Ramzan
*/ 

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#endif

  string path, res;
  cin>>path;

  int s= static_cast<int>(path.length());
  res= path[0];
  for(int i=1;i<s;i++){
    if(path[i-1]=='/' && path[i]=='/') continue;
    res+=path[i];
  }
  
  if(res.size()>1 && res.back()=='/') res.pop_back();

  cout<<res<<endl;

  return 0;
}
