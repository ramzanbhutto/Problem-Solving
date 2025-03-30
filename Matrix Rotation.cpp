#include<iostream>
using namespace std;
void solve();
int main()
{
  int x;
  cin>>x;
  while(x--)
    solve();

  return 0;
}
void solve()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;

  bool beautiful=false;

  for(int i=0;i<4;++i){
    if(a<b && a<c && b<d && c<d){
      beautiful=true;
      break;
    }
    int tempa=a, tempb=b, tempc=c, tempd=d;
    a=tempc, b=tempa, c=tempd, d=tempb;
  }

  if(beautiful)
    cout<<"YES\n";
  else
   cout<<"NO\n";

}
