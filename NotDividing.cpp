#include<iostream>
#include<vector>
using namespace std;
void solve(int);
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;
  while(t--){
    int num;
    cin>>num;
    solve(num);
  }

  return 0;
}
void solve(int n){
  vector<int> vec(n);
  for(int &i:vec)
    cin>>i;

  for(int i=0;i<n;i++)
    if(vec[i]==1) ++vec[i];

  for(int i=1;i<n;i++)
    if(vec[i]%vec[i-1]==0) ++vec[i];

  for(int i:vec)
    cout<<i<<" ";
  cout<<endl;

}
