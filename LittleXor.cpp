/*
* Author: Muhammad Ramzan
*/

#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

auto main() -> int{
  fastio
  #ifdef TESTING 
    freopen("input.txt","r",stdin);
  #endif

  int n; cin>>n;
  vector<int> vec(n);
  for(int i=0; i<n; i++) cin>>vec[i];

  int xorMax=0;

  for(int i=0;i<n;i++){
    int xorSum=0;
    for(int j=i;j<n;j++){ 
      xorSum^=vec[j];
      xorMax=max(xorMax,xorSum);
    }
  }

  cout<<xorMax<<"\n";

  return 0;
}
