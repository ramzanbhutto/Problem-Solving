#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void time(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(int n, int m){
  vector<int> vec(n);
  for(int &i:vec) cin>>i;

  int maxe = *max_element(vec.begin(), vec.end());  /* the first maximum will always be the maximum */
  
  vector<int> maxIndex;
  for(int i=0;i<m;i++){
    char c; int l, r;
    cin>>c;
    cin.ignore();
    cin>>l>>r;
    if(l<=maxe && maxe<=r){
      if(c=='+')
        maxe++;
      else
        maxe--;
    }
    maxIndex.push_back(maxe);
  }

  for(int i:maxIndex){
    cout<<i<<" ";
  }
  cout<<endl;

}

int main()
{
  time();

  int t;
  cin>>t;
  while(t--){
    int n, m;
    cin>>n>>m;
    solve(n, m);
  }

  return 0;
}
