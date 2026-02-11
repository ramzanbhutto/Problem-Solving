#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int kthSmallest_MaxHeap(vector<vector<int>>& matrix, int k){
  // time complexity: O(n^2*log(k))
  // space complexity: O(k)
  int n= matrix.size();
  priority_queue<int> maxHeap;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      maxHeap.push(matrix[i][j]);
      if(maxHeap.size()>k) maxHeap.pop();
    }
  }

  return maxHeap.top();
}

int kthSmallest_MinHeap(vector<vector<int>>& matrix, int k){
  // time complexity: O(n^2*log(n^2)) = O(n^2*log(n))
  // space complexity: O(n^2)
  int n= matrix.size();
  priority_queue<int, vector<int>, greater<int>> minHeap;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      minHeap.push(matrix[i][j]);
    }
  }

  for(int i=1; i<k; i++){
    minHeap.pop();
  }

  return minHeap.top();
}

int kthSmallest_BinarySearch(vector<vector<int>>& matrix, int k){
  // time complexity: O(n*log(max-min))
  // space complexity: O(1)
  int n= matrix.size();
  int low= matrix[0][0];
  int high= matrix[n-1][n-1];

  while(low<high){
    int mid= low+(high-low)/2;
    int count=0;

    int i=n-1, j=0;
    while(i>=0 && j<n){
      if(matrix[i][j]<=mid){
        count+= (i+1);
        j++;
      }
      else i--;
    }

    if(count<k) low= mid+1;
    else high= mid;
  }

  return low;
}

int main(){
  vector<vector<int>> matrix= {{1,5,9}, {10,11,13}, {12,13,15}};
  int k=8;
  cout<<"Using Max Heap: "<<kthSmallest_MaxHeap(matrix, k)<<endl;
  cout<<"Using Min Heap: "<<kthSmallest_MinHeap(matrix, k)<<endl;
  cout<<"Using Binary Search: "<<kthSmallest_BinarySearch(matrix, k)<<endl;
  return 0;
}
