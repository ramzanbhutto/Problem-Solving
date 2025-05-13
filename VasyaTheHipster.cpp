#include<iostream>
using namespace std;

void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

int main(){

  time();

  int red,blue;
  cin>>red>>blue;

  int mine= min(red,blue);
  int maxe= max(red,blue);

  cout<<mine<<" "<<(maxe-mine)/2<<endl;
  return 0;
}
