#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

template<typename T> 
void cinv(vector<T> &v){
  for(T &x: v) cin>>x; 
}

bool are_adjacent(int x, int y){
    return x!=y && x+y!=7;
}

void solve(){
  int n;
  cin>>n;
  vector<int> dice(n);
  cinv(dice);
  
  int ops = 0;
  for(int i=1; i<n; i++){
    if(!are_adjacent(dice[i-1], dice[i])){
      ops++;
      bool found = false;
      for(int val=1; val<=6; val++){
        if(are_adjacent(dice[i-1],val)){
          if(i+1<n){
            if(are_adjacent(val, dice[i+1])){
              dice[i]=val;
              found=true;
              break;
            }
          } 
          else{
            dice[i]=val;
            found=true;
            break;
          }
        }
      }
      if(!found){
        for(int val = 1; val<=6; val++){
          if(are_adjacent(dice[i-1], val)){
            dice[i]=val;
            break;
          }
        }
      }
    }
  }
  
  cout<<ops<<"\n";
}

/* 
  // find this solution during upsolving the problem
* void solve() {
    int n;
    std::cin >> n;
 
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
 
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1] || a[i] + a[i + 1] == 7) {
            ans++;
            i++;
        }
    }
 
    std::cout << ans << "\n";
}
*/

int main(){
  fastio
  #ifdef TESTING
    freopen("input.txt", "r", stdin);
  #endif

  int t;
  cin>>t;
  while(t--){
    solve();
  }

  return 0;
}
