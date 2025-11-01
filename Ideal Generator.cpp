#include<iostream>
using namespace std;
void time()
{
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  cout.tie(nullptr);
}
int main()
{
  time();
  int t;
  cin>>t;
  while(t--){
    int k;
    cin>>k;
    if(k%2==0) cout<<"NO\n";
    else cout<<"YES\n";
  }

  return 0;
}
