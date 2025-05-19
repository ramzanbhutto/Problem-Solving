#include<iostream>
#include<cmath>
#include<numeric>
using namespace std;

void time(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
}

void solve(int n){
  if(n==1)   cout<<1<<endl;
  
  else if(n%2!=0)  cout<<-1<<endl;
  
  else{
    int arr[n];
    iota(arr, arr+n, 1);
    for(int i=0;i<n/2;i++)  swap(arr[i], arr[i+1]);
    for(auto i:arr)  cout<<i<<" ";
    cout<<endl;
  }

}

int main(){
  time();

  int t;
  cin>>t;

  while(t--){
    int num;
    cin>>num;
    solve(num);
  }

  return 0;
}
