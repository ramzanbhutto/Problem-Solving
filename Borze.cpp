#include<iostream>
using namespace std;

void time(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
}

int main(){
  time();

  string s;
  cin>>s;

  string ans = "";

  for(int i=0;i<s.length();i++){
    if(s[i] == '.'){
      ans+= '0';
    }
    else if(s[i] == '-'){

      if(s[i+1] == '.'){
        ans+= '1';
        i++; // Skip the next character
      }
      else if(s[i+1] == '-'){
        ans+= '2';
        i++; // Skip the next character
      }
    
    }
  }

  cout<<ans<<"\n";

  return 0;
}
