#include<iostream>
#include<vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;

  while(t--){
    int n;
    cin>>n;
    vector<int> vec(n);
    int sum=0;
    bool odd=false, even=false;
    for(int &i:vec){
      cin>>i;
      sum+=i;
      if(i%2) odd=true;
      if(!(i%2)) even=true;
    }

    if(sum%2 || (odd && even)) cout<<"YES\n";
    else cout<<"NO\n";
  }

  return 0;
}
