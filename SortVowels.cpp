#include<iostream>
#include<algorithm>
using namespace std;
string sortVowels(string );
int main()
{
  string str;
  cout<<"Enter the string: ";
  cin>>str;
  cout<<"The string after sorting vowels is: "<<sortVowels(str)<<endl;

  return 0;
}

string sortVowels(string s) {
      string t="";
      for(char &c:s)
       if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'||
          c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
         t.push_back(c);

      sort(t.begin(),t.end());

      int j=0;
      for(char &c:s)
      {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
          c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
          c= t[j++];
      }     

      return s; 
    }
