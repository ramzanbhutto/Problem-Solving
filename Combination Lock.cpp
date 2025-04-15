#include <iostream>
using namespace std;
void solve(); 
int main() {
    int t;  cin>>t;
    while(t--)  solve();
  return 0;
}
void solve(){
  int num; cin>>num;
  if(num%2==0) cout<<-1<<endl;
  else{
    while(num!=0){
      cout<<num<<" ";
      num--;
    }
    cout<<endl;
  }
}
