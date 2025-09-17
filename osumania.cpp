#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

void solve(){
 int n;
 cin>>n;
 int size=n; 
 vector<int> save;
 while(n){ 
 string s;
  cin>>s;
  save.pb(s.find('#')+1);
   --n; 
  }
  for(int i=size-1;i>=0;--i) cout<<save[i]<<" ";
  cout<<endl;
}

int main(){
    fastio
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}

