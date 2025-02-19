#include<iostream>
#include<cstring>
using namespace std;
int MazePaths(char**,int,int,int=0,int=0);
int main()
{
  int rows,cols;
  cout<<"Enter total number of rows: ";
  cin>>rows;
  cout<<"Enter total number of cols: ";
  cin>>cols;
  
  char** maze=new char*[rows];
  for(int i=0;i<rows;i++)
    maze[i]=new char[cols];

  cout<<"Enter cell of the Maze(either # or .)"<<endl;
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
      cin>>*(*(maze+i)+j);
  }
 
  if(maze[0][0]!='.' || maze[rows-1][cols-1]!='.')
    cout<<"Number of paths are none(0)"<<endl;
  else
   cout<<"Number of paths from starting point to the destinations are: "<<MazePaths(maze,rows,cols)<<endl;

  for(int i=0;i<rows;i++)
  {
    delete[] maze[i];
    maze[i]=NULL;
  }
  delete[] maze;
  maze=NULL;

  return 0;
}

int MazePaths(char**m,int r,int c,int i, int j)
{  
  if(i==r-1 && j==c-1)
    return 1;
 
  if(i>=r || j>=c || m[i][j]=='#')
    return 0;

  return MazePaths(m,r,c,i+1,j) + MazePaths(m,r,c,i,j+1); 
}
