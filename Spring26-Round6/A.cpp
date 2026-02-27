#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl '\n'
using ll=long long;

template<typename T>
void cinv(vector<T> &v){
    for(auto &it:v) cin>>it;
}

void solve(){}

int main(){
  fastio
  #ifdef TESTING
    freopen("input.txt", "r", stdin);
  #endif

  int k;
  cin>>k;
  vector<int> v;
  for(int i=1; static_cast<int>(v.size())<k; i++){
    int x=i;
    bool bad=false;
    while(x){
      if((x&1) && (x&2)){
        bad=true;
        break;
      }
      x>>=1;
    }
    if(!bad) v.push_back(i);
  }

  cout<<v[k-1]<<endl;
  return 0;
}
