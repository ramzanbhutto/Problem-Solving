#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& );
int main()
{
	int s;
	cout<<"Enter size of vector: ";
	cin>>s;

	vector<int> vec(s);
	cout<<"Enter prices: ";
	for(int& i: vec)
		cin>>i;

	cout<<"Profit is: "<<maxProfit(vec)<<endl;

	return 0;
}
int maxProfit(vector<int>& vec)
{
	int size=vec.size(), profit=0;

	for(int i=0; i<size-1;i++)
	{
		for(int j=i+1;j<size; j++){
			//profit= max(profit, vec[j]-vec[i]);
		profit=profit;
		if(vec[j]-vec[i]>profit)
			profit= vec[j]-vec[i];
		}

	}

	return profit;
}
