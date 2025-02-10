#include<iostream>
#include<vector>
using namespace std;
int singlenum(vector<int>& );
int main()
{
	int size;
	cout<<"Enter size of vector: ";
	cin>>size;
	cout<<"Enter elements of vector: ";
	vector<int> nums(size);
	for(int& i: nums)
		cin>>i;

	cout<<"Single number in vector is: "<<singlenum(nums)<<endl;

	return 0;
}
int singlenum(vector<int>& n)
{
	int size=n.size();

	for(int i=0;i<size;i++)
	{
		int count=0;
		for(int j=0;j<size;j++)
		{
			if(n[i]==n[j])
				count++;
		}
		if(count==1)
			return n[i];
	}

	return -1;
}


