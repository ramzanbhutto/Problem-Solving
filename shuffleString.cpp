#include <ios>
#include<iostream>
#include <limits>
#include<vector>
using namespace std;
string restoreString(string,vector<int>&);
int main()
{
  string str;
  cout<<"Enter string: ";
  cin>>str;

  cin.ignore();
  vector<int>indices(str.length());
  cout<<"Enter indices same as size of string: ";
  for(int&v:indices)
  cin>>v;

  for(int i=0;i<str.length();i++)
  {
    if(indices[i]>str.length())
    {
      cerr<<"Wrong indexing. String can't be shuffled."<<endl;
      return -1;
    }
  }

  cin.ignore(numeric_limits<streamsize>::max(),'\n');

  cout<<"Shuffled string as per indices is: "<<restoreString(str,indices)<<endl;

  return 0;
}
string restoreString(string s,vector<int>& v)
{
  string set=s;
  for(int i=0;i<s.length();i++)
    s[v[i]]=set[i];

  return s;
}
