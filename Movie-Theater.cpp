#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
  int rows,cols;
  cout<<"Enter total number of rows: ";
  cin>>rows;
  cout<<"Enter total number of cols: ";
  cin>>cols;
  
  int** movie=new int*[rows];
  for(int i=0;i<rows;i++)
    movie[i]=new int[cols];

  srand(time(0));
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
      *(*(movie+i)+j)= rand()%2;
  }

  int count=0;
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      int r,s; 
      cout<<"Enter row and seat number to reserve(0 0 to stop): ";
      cin>>r>>s;

      if(r>rows && s>cols)
        cout<<"Invalid row or seat number. Please try again"<<endl;
      else if(r==0 && s==0)
          goto label;
      else if(movie[r][s]==1)
          cout<<"Seat is already reserved. So, kindly choose another seat"<<endl;
      else
      {
        cout<<"Seat reserved successfully"<<endl;
        count++;
        movie[r][s]=1;
      }
    }
  }

  label:
  cout<<endl<<"Total number of seat reserved are: "<<count<<endl;


  for(int i=0;i<rows;i++)
  {
    delete[] movie[i];
    movie[i]=NULL;
  }
  delete[] movie;
  movie=NULL;

  return 0;

}
