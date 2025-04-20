#include<iostream>
using namespace std;
int main(){
  int tt;
  cin>>tt;
  while(tt--){
    int n;
    cin>>n;
    int c1=n/3;
    int c2=c1;
    if(n%3==1) c1++;
    else if(n%3==2) c2++;
    cout<<c1<<" "<<c2<<endl;
  }
  return 0;
}
