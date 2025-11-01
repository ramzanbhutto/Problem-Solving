#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream file("num.txt", ios::app);
  if(!file.is_open())
  {
	  cerr<<"Error"<<endl;
	  return -1;
  }

  cout<<"Successfully"<<endl;
  file.close();

  ifstream file1("num.txt");
 
  string line;
    int lineC=0;

 while(getline(file1,line))
 {
        lineC++;

 }
 
 file1.close();

 cout<<lineC<<endl;



 return 0;
}

