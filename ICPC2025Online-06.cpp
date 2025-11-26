#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll= long long;
const ll MOD = 1'000'000'007;
const ll N= 8000;
ll Fact[N+1], invFact[N+1];
bool precomputed= false;

ll modPow(ll a, ll b){
  ll res=1;
  while(b){
    if(b&1) res= (res*a)%MOD;
    a=(a*a)%MOD;
    b>>=1;
  }
  return res;
}

ll modInverse(ll a){
  return modPow(a, MOD-2);
}

void PRE(){
  if(precomputed) return;
  precomputed= true;

  Fact[0]= 1;
  for(int i=1; i<=N; i++){
    Fact[i]= Fact[i-1] * i % MOD;
  }

  invFact[N]= modInverse(Fact[N]);

  for(int i=N-1; i>=0; i--){
    invFact[i]= invFact[i+1]*(i+1) % MOD;
  }
}

ll nCr(ll n, ll r){
  if(r>n || r<0) return 0ll;
  if(n>N) return 0ll;
  PRE();
  return (Fact[n]* invFact[r] % MOD) * invFact[n - r] % MOD;
}

int main(){
  fastio
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  int n;
  cin>>n;
 map<pair<int, int>, int> boxCount;
    
  for(int i = 0; i < n; i++){
      int a, b;
      cin>>a>>b;
      boxCount[{a, b}]++;
    }
    
    PRE();
    
    ll cnt = 0;
    
  vector<pair<pair<int,int>, int>> boxes(boxCount.begin(), boxCount.end());
  for(int i = 0; i < (int)boxes.size(); i++){
    for(int j = i + 1; j < (int)boxes.size(); j++){
      int a1 = boxes[i].first.first, b1 = boxes[i].first.second;
      int a2 = boxes[j].first.first, b2 = boxes[j].first.second;
            
     int ttA = a1 +a2;
      int ttB = b1+ b2;
      int tt = ttA + ttB;
            
      ll ways = nCr(tt, ttA);
       ll pairs = (1LL * boxes[i].second * boxes[j].second) % MOD;
        cnt = (cnt + ways* pairs) % MOD;
      }
    }
    
    for(auto& p : boxCount){
      if(p.second >= 2){
        int a = p.first.first, b = p.first.second;
        int ttA = 2 * a;
        int ttB = 2 * b;
        int tt = ttA + ttB;
      
        ll ways = nCr(tt, ttA);    
        ll pairs =(1LL* p.second *(p.second - 1)/2) % MOD;
      cnt =(cnt +ways* pairs) % MOD;
      }
    }
    
  cout<<cnt<<"\n";
  return 0;
}
