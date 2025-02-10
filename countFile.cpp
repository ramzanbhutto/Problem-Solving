#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("file.txt");
	if(!file.is_open()){
		cerr<<"File doesn't exist"<<endl;
		return -1;
	}

	int number,sum=0,numCount=0;
	char ch;
	int chCount=0;
	

	while(file.get(ch)){
         if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
		 chCount++;

	 if(ch>='0' && ch<='9')
		 numCount++;

	}
	
	/*while(file>>number)        //sum of nums in that file
		sum+= number;    */


	//cout<<"Sum of numbers in that file is: "<<sum<<endl;
	cout<<"Number of characters in that file are: "<<chCount<<endl;
	cout<<"Number of digits in that file are: "<<numCount<<endl;


	file.close();

	return 0;
}


