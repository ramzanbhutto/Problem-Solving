#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
void solve();
int main()
{
  int tt;
  cin>>tt;
  while(tt--)
    solve();
  return 0;
}
void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  unordered_set<int> s;
  for(int &i:a){
    cin>>i;
    s.insert(i);
  }
  if(s.size()==n) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
