#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("space.txt");
	if(!file.is_open())
	{
		cerr<<"Error"<<endl;
		return -1;
	}

	int i=0;
	char ch;
	while(file.get(ch)){
		if(ch==' ')
		i++;
	}

	cout<<"Number of spaces in that file are: "<<i<<endl;
	file.close();

	return 0;
}

