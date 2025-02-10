#include <cmath>
#include<iostream>
using namespace std;
int sumofSquares(int );
bool isHappy(int );
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(isHappy(num))
	cout<<"Happy number"<<endl;
	else
		cout<<"Sad number"<<endl;

	return 0;
}

bool isHappy(int n)
{
	int slow=n,fast=n;
	do{
		slow= sumofSquares(slow);
		fast= sumofSquares(sumofSquares(fast));
	}while(slow!=fast);

	return slow==1;
}

int sumofSquares(int n)
{
	int sum=0,digit=0;
	while(n!=0)
	{
		digit=n%10;
		sum+= digit*digit;
		n/=10;
	}

	return sum;
}

