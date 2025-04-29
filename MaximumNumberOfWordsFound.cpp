#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int mostWords(vector<string>&);
int main()
{
  int n;
  cout<<"Enter the number of strings: ";
  cin>>n;

  cin.ignore(); // To ignore the newline character after the integer input
  vector<string> sentence(n);
  cout<<"Enter the strings:\n";
  for(auto &s:sentence)
   getline(cin, s);

  cout<<"Maximum number of words in a sentence: "<<mostWords(sentence)<<endl;

  return 0;
}
int mostWords(vector<string>& str){
  int maxWords= 0;
  for(int i=0; i<str.size(); i++){
    int wordCount = 0;
    for(int j=0; j<str[i].size(); j++)  /* or just "int spacecount= count(str[i].begin(), str[i].end(), ' ');" instead of this loop*/
      if(str[i][j] == ' ')  wordCount++;  
    
    maxWords = max(maxWords, wordCount + 1);
  }

  return maxWords;
}
