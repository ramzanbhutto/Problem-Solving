#include<iostream>
using namespace std;

void solve(int ,int);
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n,m;
  cin>>n>>m;
  solve(n,m);

  return 0;
}

void solve(int n, int m){
  int count=0;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m; j++){
      if(i%2 != 0) cout<<'#';
      else{
        if(count%2 == 0){
          if(j==m) cout<<'#';
          else cout<<'.';
        }
        else{
          if(j==1) cout<<'#';
          else cout<<'.';
        }
       
     }
    }
    cout<<"\n";
    if(i%2 == 0) count++;
  }
  cout<<"\n";

}
