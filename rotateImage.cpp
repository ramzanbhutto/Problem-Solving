#include<iostream>
using namespace std;
void rotate(int [][3],int);
int main()
{
	int matrix[3][3];
	cout<<"Enter an array: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cin>>matrix[i][j];
	}

	rotate(matrix,3);

	return 0;
}

void rotate(int matrix[3][3], int size)
{

	int temp=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1; j<size; j++)
		{
			temp= matrix[i][j];
			matrix[i][j]= matrix[j][i];
			matrix[j][i]= temp;
		}
	}

	temp=0;

	for(int i=0; i<size; i++)
	{
		int left=0, right=size-1;

		while(left<right)
		{
			temp=matrix[i][left];
			matrix[i][left]= matrix[i][right];
			matrix[i][right]= temp;

			left++, right--;
		}
	}


	cout<<"Rotated image is: "<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0; j<3; j++)
			cout<<matrix[i][j]<<" ";

		cout<<endl;
	}

}




