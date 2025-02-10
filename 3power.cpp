#include<iostream>
using namespace std;
bool isPower(int);
int main()
{
	int num;
	cin>>num;
	if(isPower(num))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;

	return 0;
}
bool isPower(int n)
{
	if(n==1)
		return true;

	if(n<=0 || (n%3 !=0))
		return false;

	while(n%3==0)
		n/=3;

	return n==1;
}
