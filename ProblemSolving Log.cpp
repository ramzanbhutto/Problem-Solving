#include<iostream>
#include<unordered_map>
using namespace std;
void solve();
int main()
{
  int t;  cin>>t;
  while(t--)  solve();

  return 0;
}
void solve(){
  int n;  cin>>n;
  string s;  cin>>s;

  unordered_map<char,int> time;
  unordered_map<char,int> freq;
  for(char c='A';c<='Z';c++){ 
    time[c]=c-'A'+1;
    freq[c]=0;  //optional
  }
  for(char c:s)  freq[c]++;

  int solved=0;
  for(char c='A';c<='Z';c++){
    if(freq[c]>=time[c])  solved++;
  }
  cout<<solved<<endl;
}
