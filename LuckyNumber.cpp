#include<iostream>
using namespace std;
int checklucky(int );
int findlucky(int , int);
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(nullptr);
  int tt;
  cin>>tt;
  while(tt--){
    int l,r;
    cin>>l>>r;
    cout<<findlucky(l,r)<<endl;
  }

  return 0;
}

int findlucky(int l,int r){
  if(r-l>=100)
    for(int i=r;i>=l;i--) if(i%100==90) return i;
  
  int lucky=l;
  int maxluck= checklucky(l);
  for(int i=l+1; i<=r; i++){
    int currLuck= checklucky(i);
    if(currLuck>maxluck){
      maxluck=currLuck;
      lucky=i;
      if (maxluck==9)  break;
    }
  }
  return lucky;
}

int checklucky(int n){
  int minA=9,maxB=0;
  while(n>0){
   minA=min(minA,n%10);
    maxB=max(maxB,n%10);
    n=n/10;
  }

  return maxB-minA;
}
