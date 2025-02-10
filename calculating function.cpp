#include<iostream>
int main()
{
 long long int n,m=0;
  std::cin>>n;

   if(n%2==0)
      m=n/2;
   else
     m=-(n+1)/2;

  std::cout<<m<<std::endl;

}
