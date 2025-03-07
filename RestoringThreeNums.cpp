#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> vec(4);
  for(int&v:vec)
   cin>>v;
  sort(vec.begin(),vec.end());

  int a=vec[3]-vec[0], b=vec[3]-vec[1], c=vec[3]-vec[2];
  cout<<a<<" "<<b<<" "<<c<<endl;
  return 0;
}
