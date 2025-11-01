#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  if(s.length() < 26){
    cout<<"NO"<<endl;
    return 0;
  }
  vector<int> freq(26,0);
  for(int i=0;i<s.length();i++){
    if(s[i] >= 'a' && s[i] <= 'z'){
      freq[s[i]-'a']++;
    }
    else if(s[i] >= 'A' && s[i] <= 'Z'){
      freq[s[i]-'A']++;
    }
  }
  for(int i=0;i<26;i++){
    if(freq[i] == 0){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  
  return 0;
}
