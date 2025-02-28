#include <ios>
#include<iostream>
#include<vector>
using namespace std;
#define vec vector<int>
#define pb push_back
int main()
{
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  int n,k;
    cin>>n>>k;
    vec a;
  
  for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.pb(x);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
