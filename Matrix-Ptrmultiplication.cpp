#include<iostream>
using namespace std;
void MatrixMultiplication(int**,int**,int**,int,int,int,int);
int main()
{
  int rows1,cols1;
  cout<<"Enter number of rows for Matrix A: ";
  cin>>rows1;
  cout<<"Enter number of columns for Matrix A: ";
  cin>>cols1;

  int** A=new int*[rows1];
  for(int i=0;i<rows1;i++)
    A[i]= new int[cols1];

  cout<<"Enter elements for Matrix A: "<<endl;
  for(int i=0;i<rows1;i++)
  {
    for(int j=0;j<cols1;j++)
      cin>>*(*(A+i)+j);
  }

  int rows2,cols2;
  cout<<"Enter number of rows for Matrix B: ";
  cin>>rows2;
  cout<<"Enter number of columns for Matrix B: ";
  cin>>cols2;

  int** B=new int*[rows2];
  for(int i=0;i<rows2;i++)
    B[i]= new int[cols2];

  cout<<"Enter elements for Matrix B: "<<endl;
  for(int i=0;i<rows2;i++)
  {
    for(int j=0;j<cols2;j++)
      cin>>*(*(B+i)+j);
  }

  int** C=new int*[rows2];
  for(int i=0;i<rows2;i++)
    C[i]= new int[cols1];

  MatrixMultiplication(A,B,C,rows1,cols1,rows2,cols2);

  if(cols1==rows2)
  {
    cout<<"Elements after Matrix multiplication are: "<<endl;
    for(int i=0;i<rows2;i++)
    {
      for(int j=0;j<cols1;j++)
        cout<<*(*(C+i)+j)<<" ";
      
      cout<<endl;
    }
  }
  else
   return -1;
  for(int i=0;i<rows1;i++)
    delete[] A[i];
  delete[] A;
  A=NULL;

for(int i=0;i<rows2;i++)
    delete[] B[i];
 delete[] B;
  B=NULL;

for(int i=0;i<rows2;i++)
    delete[] C[i];
  delete[] C;
   C=NULL;



  return 0;
}
void MatrixMultiplication(int** a,int** b,int** c,int r1,int c1, int r2, int c2)
{
 
      if(c1 != r2)
        {
      cerr<<"Matrices cannot be multiplied. Number of columns in A must be equal to number of rows in B"<<endl;
      return ;
      }

  for(int i=0;i<r1;i++)
  {
    for(int j=0;j<c2;j++)
    {
      for(int k=0;k<c1;k++)
        *(*(c+i)+j) += (*(*(a+i)+k)) * (*(*(b+k)+j)); 
    }
  }

}
