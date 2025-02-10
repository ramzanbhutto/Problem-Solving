#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("nTc.txt");
	if(!file.is_open())
	{
		cerr<<"Error while reading file"<<endl;
		return -1;
	}

	char ch;
	while(file.get(ch))
	{
		if(ch>='0'&&ch<='9'){
			int n= ch-'0';
                         cout<<n<<endl;
			char nc= n+'0';
			cout<<nc<<endl;
		}
	}

	file.close();

	return 0;
}

