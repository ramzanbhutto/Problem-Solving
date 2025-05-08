#include<iostream>
#include<vector>
using namespace std;
int findCenter(vector<vector<int>>& );
int main()
{
  int rows=2,cols;
  cout<<"Enter the number of edges in the star graph: ";
  cin>>cols;

  vector<vector<int>> edges(rows,vector<int>(cols));
  cout<<"Enter the edges of the star graph: ";
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<cols;j++)
    {
      cin>>edges[i][j];
    }
  }

  cout<<"The center of the star graph is: "<<findCenter(edges)<<endl;

  return 0;
}

int findCenter(vector<vector<int>>& edges){
  if(edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1])
    return edges[0][0];
    
  return edges[0][1];
}
