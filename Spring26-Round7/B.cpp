#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using ll=long long;

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> nums(n);
  for(int &i: nums) cin>>i;

  int rm=0;
  for(int i=0;i<n-1;i++){
    rm= min(nums[i], k);
    nums[i]-=rm;
    nums[n-1]+=rm;
    k-=rm;
    if(k<=0) break;
  }

  for(int i: nums) cout<<i<<" ";
  cout<<endl;
}

int main(){
  fastio
  #ifdef TESTING
    freopen("input.txt", "r", stdin);
  #endif
  
  int t;
  cin>>t;
  while(t--){
    solve();
  }

  return 0;
}
