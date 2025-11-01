#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream file("word.txt");
  if(!file.is_open()){
	  cerr<<"Error while reading the file"<<endl;
	  return -1;
  }

  string word,line;
  cout<<"Enter a word to serach: ";
  cin>>word;

  int wordCount=0;

  while(file>>line)
  {
	  if(line==word)
		  wordCount++;
  }

  cout<<"Number of "<<word<<" words in that file are: "<<wordCount<<endl;
  file.close();


  return 0;
}

