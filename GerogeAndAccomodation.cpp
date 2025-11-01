#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define endl '\n'

int main(){
    fastio
    int t;
    cin>>t;
    int count=0;
    while(t--){
     int p,q;
     cin>>p>>q;
     if(q-p>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}
