#include<iostream>
using namespace std;
#define ll long long
int main()
{
  int n;
  cin>>n;

  while(n--){
    ll t; cin>>t;
    if(t%2050!=0)  cout<<-1<<endl;
    else{
      ll k = t/2050;
      int sum = 0;
      while(k){
        sum+=k%10;
        k/=10;
      }
      cout<<sum<<endl;
    }
  }
  return 0;
}
