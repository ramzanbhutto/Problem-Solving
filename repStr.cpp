#include<iostream>
#include<string>
using namespace std;
int main()
{
	string line;
	getline(cin,line);

	string find;
	cin>>find;

	string replace;
	cin>>replace;


	int pos= line.find(find);
	while(pos!= string::npos)
	{
		line.replace(pos,find.length(),replace);
		pos=line.find(find, pos+replace.length());
	}

	cout<<line<<endl;


	return 0;
}
