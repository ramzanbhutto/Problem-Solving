#include<iostream>
#include<vector>
using namespace std;

void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int &i:a) cin>>i;

  int cnt=0,Max=0;
  for(int i:a){
    if(i==0) cnt++;
    else cnt=0;
    Max=max(Max,cnt);
  }
  cout<<Max<<endl;
}

int main()
{
  time();

  int t;
  cin>>t;

  while(t--){
    solve();
  }

  return 0;
}
