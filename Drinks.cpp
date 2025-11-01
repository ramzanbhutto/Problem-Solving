#include <ios>
#include<iostream>
#define cout std::cout 
#define cin std::cin 
#define endl std:: endl 
int main()
{
  std::ios_base::sync_with_stdio(false);
  int n;
  cin>>n;
  int save=n;
  double sum=0;
  while(n--){
    int x; cin>>x;
      sum+=x;
  }
  cout<<double(sum/save)<<endl;

  return 0;
}
