#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
  int x;  cin>>x;
  while(x--){
    int n; cin>>n;
      unordered_set<int> s(0);
    while(n--){
      int a; cin>>a;
      s.insert(a);
    }
    cout<<s.size()<<endl;
  }
  return 0;
}
