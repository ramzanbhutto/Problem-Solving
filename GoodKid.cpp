#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}


void solve(int n){
  vector<int> vec(n);
  for(int &n: vec)
    cin>>n;

  auto it= *min_element(vec.begin(), vec.end());
  auto find_it= find(vec.begin(), vec.end(), it);
  int index= find_it - vec.begin();

  vec[index]+= 1;

  int product= 1;
  for(int n: vec)
    product*= n;

  cout<<product<<"\n";
}

int main(){
  time();
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    solve(n);
  }
  return 0;
}
