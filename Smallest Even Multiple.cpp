#include<iostream>
#define cout std::cout 
#define cin std::cin 
#define endl std::endl
#define cerr std::cerr
#define ll long long

ll smallestEvenMultiple(ll);
int main()
{
  std::ios_base::sync_with_stdio(false);
  cout.tie(0);

  ll num;
  cout<<"Enter a number: ";
  cin>>num;

  if(cin.fail()){
    cerr<<"Wrong input"<<endl;
    return -1;
  }
  cout<<"It's smallest even multiple is: "<<smallestEvenMultiple(num)<<endl;

  return 0;
}

ll smallestEvenMultiple(ll n)
{
  if(n%2==0)
    return n;

  return n*2;
}
