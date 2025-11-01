#include<iostream>
#define endl std::endl
#define cout std::cout 
#define cin std::cin 
int main()
{
  std::ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int count=0;
  int x; cin>>x;
  while(x--){
    int a,b,c;
    cin>>a>>b>>c;

    if((a==1 && b==1) || (a==1 && b==1 && c==1) || (b==1 && c==1) || (a==1 && c==1))
      count++;
  }
  cout<<count<<endl;

  return 0;
}
