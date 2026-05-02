#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define endl '\n'
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

// Double hashing to avoid collisions
const ll MOD1=1e9+7, BASE1=131;
const ll MOD2=1e9+9, BASE2=137;

struct HashChecker {
    int n;
    vector<ll> h1,h2,rh1,rh2,pw1,pw2;
    
    void build(const vector<int>& a){
        n=a.size();
        h1.resize(n+1,0); h2.resize(n+1,0);
        rh1.resize(n+1,0); rh2.resize(n+1,0);
        pw1.resize(n+1,1); pw2.resize(n+1,1);
        for(int i=0;i<n;i++){
            h1[i+1]=(h1[i]*BASE1+a[i]+1)%MOD1;
            h2[i+1]=(h2[i]*BASE2+a[i]+1)%MOD2;
            pw1[i+1]=pw1[i]*BASE1%MOD1;
            pw2[i+1]=pw2[i]*BASE2%MOD2;
        }
        for(int i=n-1;i>=0;i--){
            rh1[i]=(rh1[i+1]*BASE1+a[i]+1)%MOD1;
            rh2[i]=(rh2[i+1]*BASE2+a[i]+1)%MOD2;
        }
    }
    
    // forward hash of [l,r]
    pair<ll,ll> fwd(int l,int r){
        ll v1=(h1[r+1]-h1[l]*pw1[r-l+1]%MOD1+MOD1*2)%MOD1;
        ll v2=(h2[r+1]-h2[l]*pw2[r-l+1]%MOD2+MOD2*2)%MOD2;
        return {v1,v2};
    }
    // reverse hash of [l,r]
    pair<ll,ll> rev(int l,int r){
        ll v1=(rh1[l]-rh1[r+1]*pw1[r-l+1]%MOD1+MOD1*2)%MOD1;
        ll v2=(rh2[l]-rh2[r+1]*pw2[r-l+1]%MOD2+MOD2*2)%MOD2;
        return {v1,v2};
    }
    
    bool isPal(int l,int r){
        if(l>r) return false;
        return fwd(l,r)==rev(l,r);
    }
};

void solve(){
    int n;
    cin>>n;
    int s=2*n;
    vector<int> nums(s);
    vector<int> p(n,-1), q(n,-1);
    for(int i=0;i<s;i++){
        cin>>nums[i];
        if(p[nums[i]]==-1) p[nums[i]]=i;
        else q[nums[i]]=i;
    }
    
    HashChecker H;
    H.build(nums);
    
    int min1p=s,  min2p=s,  min1val=-1;
    int max1q=-1, max2q=-1, max1val=-1;
    int res=1;
    
    for(int i=0;i<n;i++){
        if(p[i]<min1p){ min2p=min1p; min1p=p[i]; min1val=i; }
        else if(p[i]<min2p) min2p=p[i];
        
        if(q[i]>max1q){ max2q=max1q; max1q=q[i]; max1val=i; }
        else if(q[i]>max2q) max2q=q[i];
        
        // Case 1: no center exception
        if(H.isPal(min1p,max1q)){
            res=i+1; continue;
        }
        // Case 2: min1val is center exception, window shrinks left
        if(min2p<s && q[min1val]>=min2p && H.isPal(min2p,max1q)){
            res=i+1; continue;
        }
        // Case 3: max1val is center exception, window shrinks right
        if(max2q>=0 && p[max1val]<=max2q && H.isPal(min1p,max2q)){
            res=i+1; continue;
        }
    }
    cout<<res<<endl;
}

int main(){
    fastio
#ifdef TESTING
    freopen("input.txt","r",stdin);
#endif
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
