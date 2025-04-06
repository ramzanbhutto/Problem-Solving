#include<iostream>
int main()
{
  int t;  std::cin>>t;
  while(t--){
    int n;  std::cin>> n;
    if(n<=3) std::cout<<1+(n==1)<<std::endl;
    else  std::cout<<(n+2)/3<<std::endl;
  }
  return 0;
}
