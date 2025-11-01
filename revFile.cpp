#include<iostream>
//#include<algorithm>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("rev.txt");
	if(!file.is_open())
	{
		cerr<<"Error"<<endl;
		return -1;
	}

	string rev;
	char temp;
	while(file>>rev){
		//reverse(rev.begin(),rev.end());
		int left=0, right=rev.length()-1;
		while(left<right)
		{
			temp=rev[left];
			rev[left]= rev[right];
			rev[right]=temp;
			left++,right--;
		}

	}

	cout<<rev<<endl;

	file.close();

	return 0;
}
