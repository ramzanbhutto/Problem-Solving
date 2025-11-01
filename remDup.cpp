#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream file("remove.txt");
	if(!file.is_open())
	{
		cerr<<"Error"<<endl;
		return -1;
	}

	string result="";
        string line;
	while(getline(file,line))
	{
            for(int left=0;left<line.length();left++)
	    {
	      char ch= line[left];
	      bool isfound=false;
                   
	       for(int right=0; right<result.length(); right++)
	        {
		  if(result[right]==ch)
		    {
		       isfound=true;
		       break;
		    }
		 }

		if(!isfound)
		  result+= ch;
             }
	}

	//file<<result;

	cout<<"Without duplicates string is: "<<result<<endl;

	file.close();

	return 0;
}

	      
