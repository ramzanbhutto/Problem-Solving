#include <bits/stdc++.h>
using namespace std;

using ll=long long;
using ld=long double;

#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

vector<int> buildManacher(const vector<int>& x){
  int n=static_cast<int>(x.size());
  int m=2*n+1;

  vector<int> T(m);
  for(int i=0;i<n;i++) T[2*i+1]=x[i];
  for(int i=0;i<=n;i++) T[2*i]=-1;
  vector<int> P(m,0);
  int c=0,r=0;

  for(int i=0;i<m;i++){
    int mirror=2*c-i;
    if(i<r) P[i]=min(r-i,P[mirror]);
    while(i-P[i]-1>=0 && i+P[i]+1<m && T[i-P[i]-1]==T[i+P[i]+1])  P[i]++;
    if(i+P[i]>r){
      c=i; 
      r=i+P[i]; 
    }
  }

  return P;
}

bool isPal(int l, int r, const vector<int>& P){
  if(l>r) return false;
  int center=l+r+1;
  int radius=r-l;
  return P[center]>=radius;
}

void solve(){
  int n;
  cin>>n;
  int s=2*n;
  vector<int> nums(s);
  vector<int> p(n,-1), q(n,-1);
  for(int i=0;i<s;i++){
    cin>>nums[i];
    if(p[nums[i]]==-1) p[nums[i]]=i;
    else q[nums[i]]=i;
  }

  vector<int> P=buildManacher(nums);  // one time instead of calculating everytime in isPalindrome(isPal) function

  int min1p=s, min2p=s;
  int max1q=-1, max2q=-1;
  int min1val=-1, max1val=-1;
  int res=1;
  for(int i=0;i<n;i++){
    if(p[i]<min1p){
      min2p=min1p;
      min1p=p[i];
      min1val=i;
    }
    else if(p[i]<min2p) min2p=p[i];
    if(q[i]>max1q){
      max2q=max1q;
      max1q=q[i];
      max1val=i;
    }
    else if(q[i]>max2q) max2q=q[i];
    if(isPal(min1p,max1q,P)){
      res=i+1;
      continue;
    }
    if(min2p<s){
      if(q[min1val]>=min2p && isPal(min2p,max1q,P)){
        res=i+1;
        continue;
      }
    }
    if(max2q>=0){
      if(p[max1val]<=max2q && isPal(min1p,max2q,P)){
        res=i+1;
        continue;
      }
    }
  }
  cout<<res<<endl;
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt","r",stdin);
#endif
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
