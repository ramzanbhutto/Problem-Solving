#include<bits/stdc++.h>
using namespace std;

void solve();

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--)
    solve();

  return 0;
}

void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int &i: a)
    cin>>i;
  unordered_map<int, int> freq;
  for(int i: a)
    freq[i]++;

  for(auto it: freq){
    if(it.second >= 3){
      cout<<it.first<<endl;
      return;
    }
  }
  cout<<-1<<endl;
}
