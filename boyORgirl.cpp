#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

  string name;
  cin>>name;

  unordered_set<char> unique;
  for(char ch:name)
   unique.insert(ch);

  if(unique.size()%2 == 0)
    cout<<"CHAT WITH HER!"<<endl;
  else
    cout<<"IGNORE HIM!"<<endl;
  
      return 0;
}
