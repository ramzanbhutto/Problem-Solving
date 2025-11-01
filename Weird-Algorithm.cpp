#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'
#define ll long long

int main(){
    fastio
    ll t;
    cin>>t;
    while(t!=1ll){
     cout<<t<<" ";
     if(t%2ll) t=3ll*t+1ll;
     else t/=2ll;
   }
   cout<<1ll<<endl;
    return 0;
}

