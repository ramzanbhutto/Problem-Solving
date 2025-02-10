#include<iostream>
#include<vector>
using namespace std;
void Shuffle(int*,int);
int main()
{
	int n;
	cout<<"Enter size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements: ";
	for(int& i:arr)
		cin>>i;

	int times;
	cout<<"Enter total shuffles: ";
	cin>>times;

	Shuffle(arr, times);

	return 0;
}
void Shuffle(int* arr, int time)
{
	vector<int> vec;
	for(int i=0;i<time; i++)
	{
		vec.push_back(arr[i]);
		vec.push_back(arr[i+time]);
	}

        cout<<"Shuffles array is: ";
	for(int& i: vec)
		cout<<i<<" ";
	cout<<endl;
}
