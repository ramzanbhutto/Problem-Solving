#include<bits/stdc++.h>
using namespace std;

void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

void solve(int n){
  unordered_set<int> st;
  
  int p;
  cin>>p;
  for(int i=1;i<=p;i++){
    int x;
    cin>>x;
    st.insert(x);
  }
  
  int q;
  cin>>q;
  for(int i=1;i<=q;i++){
    int x;
    cin>>x;
    st.insert(x);
  }

  if(st.size() == n) cout<<"I become the guy.\n";
  else cout<<"Oh, my keyboard!\n";
}

int main(){
  time();
  
  int t;
  cin>>t;
 
  solve(t); 
  
  return 0;
}
