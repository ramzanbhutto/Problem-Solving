#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    vector<int> vec(3); 
    for(int &v:vec) cin>>v;
    sort(vec.begin(),vec.end());
    int n;
    cin>>n;
    if(n>=vec[2]-vec[0]+vec[2]-vec[1]){
      if((n-(vec[2]-vec[0]+vec[2]-vec[1]))%3==0) cout<<"YES\n";
      else cout<<"NO\n";
    }
    else cout<<"NO\n";
  }
}

