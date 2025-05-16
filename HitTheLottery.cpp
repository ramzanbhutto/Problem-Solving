#include<iostream>
using namespace std;

void time(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solve(int n){
  int res=0;
  int h=100,tw=20, ten=10, five=5, one=1;
  /*   cout<<temp/100 + (temp%100)/20 + (temp%20)/10 + (temp%10)/5 + (temp%5)<<endl; */
  while(n>0){
    if(n>=h){
      n-= h;
      res++;
    }
    if(n>=tw && n<h){
      n-= tw;
      res++;
    }
    if(n>=ten && n<tw){
      n-= ten;
      res++;
    }
    if(n>=five && n<ten){
      n-= five;
      res++;
    }
    if(n>=one && n<five){
      n-= one;
      res++;
    }
  }

  cout<<res<<endl;
}

int main(){
  time();
  int n;
  cin>>n;
  solve(n);
  return 0;
}
