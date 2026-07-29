#include<iostream>
int main(){
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t;
  std::cin>>t;
  while(t--){
    int x, y;
    std::cin>>x>>y;
    if(x%y==0) std::cout<<"yes\n";
    else std::cout<<"no\n";
  }

  return 0;
}
