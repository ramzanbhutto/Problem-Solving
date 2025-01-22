#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("enc.txt");
	ofstream file1("enc.txt",ios::in);
	if(!file.is_open() || !file1.is_open())
	{
		cerr<<"Error"<<endl;
		return -1;
	}

	int k;
	cin>>k;
	char ch;
	while(file.get(ch))
	{
		if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		{
			ch=ch+k;
		        file1<<ch;
		}
	}

	file.close();
	file1.close();

	return 0;
}
