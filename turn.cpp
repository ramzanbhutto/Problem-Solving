#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  long long angle;
  cin>>angle;

  angle= (angle%360 + 360) %360;
  
  angle = (angle + 44) % 360;

  long long turns= (angle%359)/90;

  cout<<turns<<endl;

  return 0;
}
