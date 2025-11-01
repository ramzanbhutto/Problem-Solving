#include<iostream>
using namespace std;
void solve();
int main()
{
    int t;
    cin>>t;
    while(t--) 
     solve();
    
    return 0; 
}
void solve()
{
    int n;  cin>>n;
    if(n%3==1)  cout<<"YES\n";
    else  cout<<"NO\n";
}
