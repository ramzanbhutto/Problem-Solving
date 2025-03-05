#include<iostream>
#include<unordered_map>
using namespace std;

int firstUniqueChar(string);
int main()
{
  string str;
  cout<<"Enter a string: ";
  cin>>str;

  cout<<"First unique character in a string is at '"<<firstUniqueChar(str)<<"' index!"<<endl;

  return 0;
}

int firstUniqueChar(string s)
{
  unordered_map<int,char> freq;     //int for frequency and char for character
  for(char& v:s)
   freq[v]++;       //counting frequency of each character

  int index=-1;

  for(int i=0;i<s.length();i++){
    if(freq[s[i]]==1)        //checking which character has frequency 1
    {
      index=i;
      return index;
    }
  }

  return index;

}
