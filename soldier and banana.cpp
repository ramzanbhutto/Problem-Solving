#include<iostream>
using namespace std;
int main()
{
  int cost,dollar,banana;
  cin>>cost>>dollar>>banana;

  int s=0;
  for(int i=1; i<=banana; i++)
  {
    s+=i*cost;
  }
  
  if(s>dollar)
    cout<<s-dollar<<endl;
  else
    cout<<0<<endl;
 return 0;
}
