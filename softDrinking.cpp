#include<iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n,k,l,c,d,p,nl,np;
  cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  
  int gas= (k*l)/(n*nl);
  int lime = (c*d)/n;
  int salt = p/(np*n);

  cout<<min(gas,min(lime,salt))<<endl;

  return 0;
}
