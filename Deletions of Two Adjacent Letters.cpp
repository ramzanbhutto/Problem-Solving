#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    string s,w;
    cin>>s>>w;
    bool flag=false;
    for(int i=0;i<s.size();i++){
      if(s[i]==w[0] && i%2==0){
        flag=true;
      }
    }
    if(flag){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }

  return 0;
}
