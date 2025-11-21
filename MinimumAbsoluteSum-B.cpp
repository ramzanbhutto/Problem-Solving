#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long

void solve(){
  int n;
  cin>>n;
  vector<long long> a(n);
  
  for(ll &i:a) cin>>i;
  
  ll first=a[0], last=a[n-1];
  bool start=(first!=-1),end=(last!=-1);

  switch((!start)*1 + (!end)*2){
    case 2: a[n-1]= first; break;
    case 1: a[0]= last; break;
    case 3: a[0]= 0; a[n-1]=0; break;
  }
    
  int i=1;
  while(i<n-1){
    if(a[i]==-1) a[i]=0; i++;
  }

  ll diff=abs(a[n-1]-a[0]);
  cout<<diff<<'\n';
  for(int i=0;i<n;i++){if(i) cout<<' ';cout<<a[i];}
  cout<<'\n';
}

int main(){
    fastio
#ifdef TESTING
    freopen("input.txt","r",stdin);
#else
#define endl "\n"
#endif
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
