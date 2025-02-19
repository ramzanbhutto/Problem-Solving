#include<iostream>
using namespace std;
#define endl "\n"
int main()
{
  int n;
  cin>>n;
  
  while(n--)
  {
    int x; cin>>x;
    if(x%3) cout<<"First"<<endl; 
    else cout<<"Second"<<endl;
    }

  return 0;
}
