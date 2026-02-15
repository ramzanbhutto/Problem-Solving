/*
* Author: Muhammad Ramzan
*/

#include <bits/stdc++.h>
using namespace std;

// type aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<long long>>;
using vb = vector<bool>;
using vvb = vector<vector<bool>>;
using vs = vector<string>;
using vpii = vector<pair<int, int>>;
using vpll = vector<pair<long long, long long>>;
using mi = map<int, int>;
using mll = map<long long, long long>;
using umi = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
using umci = unordered_map<char, int>;
using umcll = unordered_map<char, long long>;
using umsi = unordered_map<string, int>;
using umsl = unordered_map<string, long long>;
using si = set<int>;
using sll = set<long long>;
using usi = unordered_set<int>;
using usll = unordered_set<long long>;
using qi = queue<int>;
using qll = queue<long long>;
using di = deque<int>;
using dll = deque<long long>;
using li = list<int>;
using dllist = list<long long>;
using sti = stack<int>;
using stll = stack<long long>;


// macros
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define debug(x) cerr << #x << " = " << (x) << endl
#define forf(i, a, b) for (int i = (a); i < (b); ++i)
#define forr(i, a, b) for (int i = (a); i >= (b); --i)
#define forc(i, a, b, c) for (int i = (a); i < (b); i += (c))
#define fora(i, x) for (auto& i : (x))
#define forar(i, x) for (auto& i : (x))


// constants
const int INF = numeric_limits<int>::max();
const long long LINF = numeric_limits<long long>::max();
const double EPS = 1e-9;
const double PI = acos(-1);
const int MOD = 1e9 + 7;


// utility functions
template<typename T>
void cinv1(vector<T>& v){
    for(T& i : v) cin>>i;
}

template<typename T>
void cinv2(vector<vector<T>>& v){
    for(auto& row : v){
        for(T& i : row) cin>>i;
    }
}

template<typename T>
void coutv1(const vector<T> v){
    for(T i : v) cout<<i<<" ";
    cout<<'\n';
}

template<typename T>
void coutv2(const vector<vector<T>> v){
    for(const vector<T> row : v){
        for(const T i : row) cout<<i<<" ";
        cout<<'\n';
    }
}

template<typename T>
T gcd(T a, T b){
    while(b){
      T temp = b;
      b = a%b;
      a =temp;
    }
    return a;
}

template<typename T>
T lcm(T a, T b){
    return (a / gcd(a, b)) * b;
}

template<typename T>
T mod_pow(T base, T exp, T mod){
    T result = 1;
    base%= mod;
    while(exp > 0){
      if(exp & 1) result= (result * base) % mod;
      base= (base * base) % mod;
      exp>>= 1;
    }
  return result;
}

template<typename T>
T mod_inv(T a, T mod){   
    return mod_pow(a, mod - 2, mod);
}

template<typename T>
T mod_add(T a, T b, T mod){
    return ((a % mod) + (b % mod)) % mod;
}

template<typename T>
T mod_sub(T a, T b, T mod){
    return ((a % mod) - (b % mod) + mod) % mod;
}

template<typename T>
T mod_mul(T a, T b, T mod){
    return ((a % mod) * (b % mod)) % mod;
}

template<typename T>
T mod_div(T a, T b, T mod){
    return mod_mul(a, mod_inv(b, mod), mod);
}

template<typename T>
T seive(T n){
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(T i = 2; i * i <= n; ++i){
        if(is_prime[i]){
           for(T j = i * i; j <= n; j += i){
              is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

template<typename T>
vector<T> prime_factors(T n){
    vector<T> factors;
    for(T i = 2; i * i <= n; ++i){
        while(n % i == 0){
          factors.push_back(i);
          n /= i;
       }
    }
    if(n > 1){
      factors.push_back(n);
    }
  return factors;
}

template<typename T>
vector<T> divisors(T n){
    vector<T> divs;
    for(T i = 1; i * i <= n; ++i){
        if(n % i == 0){
          divs.push_back(i);
          if(i != n / i){
            divs.push_back(n / i);
          }
        }
    } 
  return divs;
}

template<typename T>
T combinatorics(T n, T r, T mod){
    if(r > n) return 0;
    if(r == 0 || r == n) return 1;
    vector<T> fact(n + 1, 1);
    for(T i = 2; i <= n; ++i){
        fact[i] = mod_mul(fact[i - 1], i, mod);
    }
    return mod_div(fact[n], mod_mul(fact[r], fact[n - r], mod), mod);
}

void solve(){
  int n;
  cin>>n;

  vi vec(n+1);
  for(int i=1; i<=n; i++) cin>>vec[i];
  
  auto find_root = [](int pos){
    while(pos%2==0)  pos/=2;
    return pos;
  };

  for(int i=1; i<=n; i++){
    int cp=i;
    int tp=vec[i];
    if(find_root(cp)!=find_root(tp)){
      cout<<"NO\n";
      return;
    }
   }

  cout<<"YES\n";
}

/* 
//found this solution during upsolving
void solve(){
  int n;
  cin>>n;
  const int log=18; // as log2(10^5) is approximately 16.6, we take 18 to be safe
  vector<int> vec(n);
  for(int &x: vec) cin>>x;

  for(int i=0;i<log; i++){
    for(int j=0; j*2+1<n; j++){
      if(vec[j]>vec[j*2+1]) swap(vec[j], vec[j*2+1]);  // we can swap the same element log times
    }
  }

  cout<<(is_sorted(vec.begin(), vec.end()) ? "YES\n" : "NO\n");
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

