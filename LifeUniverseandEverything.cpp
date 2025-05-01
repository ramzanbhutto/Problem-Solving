#include<iostream>
int main(){
  std::ios_base::sync_with_stdio(0);
  std::cin.tie(0);

  while(1){
    int n;
    std::cin >> n;
    if(n == 42) break;
    std::cout<<n<<"\n";
  }
  return 0;
}
