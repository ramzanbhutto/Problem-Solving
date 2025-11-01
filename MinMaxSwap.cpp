#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'

void solve(){
  int n; cin>>n;
  vector<int> a(n), b(n);

  for(int &i: a)  cin>>i;
  for(int &i: b)  cin>>i;

  for(int i=0; i<n; i++){
    if(a[i]>b[i])  swap(a[i], b[i]);
  }

  cout<<(*max_element(all(a))) * (*max_element(all(b)))<<endl;
}

int main(){
    fastio
    int t;
    cin>>t;
    while(t--){
    solve();
   }
    return 0;
}
