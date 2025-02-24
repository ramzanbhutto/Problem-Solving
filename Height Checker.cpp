#include<iostream>
#include<vector>
#include<algorithm>
#define vec std::vector<int>
#define vb v.begin()
#define ve v.end()
#define cout std::cout 
#define cin std::cin 
#define endl std::endl 

int heightChecker(vec &);
int main()
{
  std::ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  int x;
  cout<<"Size: ";
  cin>>x;
  vec heights(x);
  cout<<"Elements: ";
  for(int& y:heights)
  cin>>y;

  cout<<"Number of disassembled students are: "<<heightChecker(heights)<<endl;

  return 0;

}

int heightChecker(vec& heights)
{
 vec v=heights;
 sort(vb,ve);
 int count=0;
  for(int i=0;i<heights.size();i++)
  {
    if(v[i]!=heights[i])
      count++;
  }

  return count;
}
