#include<iostream>
int main()
{
  int t;
  std::cin>>t;
  while(t--)
  {
    int a,b;
    std::cin>>a>>b;
    int x= a&b;
    std::cout<<(a^x)+(b^x)<<std::endl;
  }
  return 0;
}
