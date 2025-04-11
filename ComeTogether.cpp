#include<iostream>
using namespace std;
void solve();
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
    solve();

  return 0;
}
void solve(){
  int x1,y1,x2,y2,x3,y3;
  cin>>x1>>y1>>x2>>y2>>x3>>y3;
  int dx2=x2-x1;
  int dy2=y2-y1;
  int dx3=x3-x1;
  int dy3=y3-y1;

  int commonX=0;
  if(dx2>0 && dx3>0 || dx2<0 && dx3<0)
    commonX=min(abs(dx2),abs(dx3));

  int commonY=0;
  if(dy2>0 && dy3>0 || dy2<0 && dy3<0)
    commonY=min(abs(dy2),abs(dy3));

  cout<<commonX+commonY+1<<endl;
}
