#include<iostream>
using namespace std;
void solve();
int main()
{
  int tt;
  cin>>tt;
  while(tt--) 
    solve();

  return 0;
}
void solve(){
  int n;
  cin>>n;
 
  for(int i=1;;i++){
    if(i%3==0 || i%10==3) continue;
    if(--n==0) { cout<<i<<endl;  break; }
  }

}
