#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(int);
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--){
    int boxes;
    cin>>boxes;
    solve(boxes);
  }
  
  return 0;
}
void solve(int n){
  vector<int> a(n);
  for(int &i:a)
    cin>>i;

  int candies=0, min_candy= *min_element(a.begin(), a.end());
  for(int i:a){
    if(i>min_candy)
      candies+=i-min_candy;
  }

  cout<<candies<<endl;
} 
