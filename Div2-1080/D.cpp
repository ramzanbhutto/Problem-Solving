/*
* Author: Muhammad Ramzan
*/

#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using ll = long long;

template<typename T> 
void print(vector<T> &v){
  for(auto i=1; i<(int)v.size(); i++) cout<<v[i]<<" ";
  cout<<"\n";
}

/*
* found this solution during upsolving the problem
*  int main(){
*       int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<ll> f(n+1);
        for(int i=1;i<=n;i++)
            cin >> f[i];
 
        vector<ll> a(n+1);
 
        // compute middle elements
        for(int i=2;i<=n-1;i++){
            a[i] = (f[i+1] - 2LL*f[i] + f[i-1]) / 2LL;
        }
 
        ll midSum = 0;
        for(int i=2;i<=n-1;i++)
            midSum += a[i];
 
        // total sum S
        ll S = (f[1] + f[n]) / (n-1);
 
        // compute a1
        ll g1 = f[2] - f[1];
        a[1] = (g1 + S) / 2LL;
 
        // compute an
        a[n] = S - midSum - a[1];
 
        for(int i=1;i<=n;i++)
            cout << a[i] << " ";
        cout << "\n";
    }
}
*/

void solve(){
  int n;
  cin>>n;
  vector<ll> f(n+1); 
  for(int i=1; i<=n; i++) cin>>f[i];
  
  vector<ll> ans(n+1);
  if(n==2){
    ans[1]=f[2];
    ans[2]=f[1];
    print(ans);
    return;
  }

  ll s=0,r=0;
  for(int i=2; i<n; i++){
    ans[i]= (f[i-1]+f[i+1]-2*f[i])/2;
    s+=ans[i];
    r+=ans[i]*(i-1);
  }
  ans[n]= (f[1]-r)/(n-1);
  ans[1]=f[2]-f[1]+ans[n]+s;
  print(ans);
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
