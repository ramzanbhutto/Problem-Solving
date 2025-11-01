#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("line.txt");
	if(!file.is_open())
	{
		cerr<<"Error while reading file"<<endl;
		return -1;
	}

	string line;
	int linecount=0;

	while(getline(file,line))
		linecount++;

	cout<<"Number of lines in that file are: "<<linecount<<endl;

	file.close();

	return 0;
}
