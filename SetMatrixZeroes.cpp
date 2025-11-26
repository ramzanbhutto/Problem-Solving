#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

void setZeroes(vector<vector<int>>& matrix){
  int n= (int)matrix.size();
  int m= (int)matrix[0].size();
  vector<bool> row(n, false), col(m, false);

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(matrix[i][j]==0){
        row[i]=true;
        col[j]=true;
      }
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
      if(row[i] || col[j])  matrix[i][j]=0;
  }

}

int main(){
  srand(time(nullptr));
  int rows;
  cout<<"Enter number of rows: ";
  cin>>rows;
  int cols;
  cout<<"Enter number of columns: ";
  cin>>cols;

  vector<vector<int>> matrix(rows, vector<int>(cols,0));

  cout<<"Enter the elements of the matrix: "<<endl;
  for(int i=0; i<rows; i++)
    for(int j=0; j<cols; j++) 
      matrix[i][j]=rand()%10; // Random values between 0 and 9

  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++)
      cout<<matrix[i][j]<<" ";
    cout<<endl;
  }

  setZeroes(matrix);

  cout<<"Matrix after setting zeroes: "<<endl;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++)
      cout<<matrix[i][j]<<" ";
    cout<<endl;
  }

  return 0;
}
