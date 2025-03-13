#include<iostream>
#include<vector>
using namespace std;
vector<int>findIndex(vector<string>&,char);
int main()
{
  int n;
  cout<<"Enter the number of words you want to enter: ";
  cin>>n;
  
  vector<string> words(n);
  cout<<"Enter the words: ";
  for(string &word:words)
    cin>>word;

  char ch;
  cout<<"Enter the character you want to search: ";
  cin>>ch;

  vector<int> index=findIndex(words,ch);
  cout<<"The words containing the character are present at the following indexes: ";
  for(int i:index)
    cout<<i<<" ";

  return 0;
}
vector<int>findIndex(vector<string>& words,char ch)
{
  vector<int> index;
  for(int i=0;i<words.size();i++)
  {
    if(words[i].find(ch)!=string::npos)
      index.push_back(i);
  }
  return index;
}
