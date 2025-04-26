//order matters in this problem that's why not using unordered_set
#include<iostream>
#include<unordered_map>
using namespace std;
string removeDuplicates(string);
int main()
{
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  cout<<"String after removing duplicates: "<<removeDuplicates(str)<<endl;

  return 0;
}
string removeDuplicates(string s)
{
  unordered_map<char,int> freq;
        unordered_map<char, bool> visited;

        for(char c:s)  freq[c]++;
        string res;
        for(char c:s){
            freq[c]--;
            if(visited[c]) continue;

            while(!res.empty() && c<res.back() && freq[res.back()]>0){
                visited[res.back()]=false;
                res.pop_back();
            }

            res.push_back(c);
            visited[c]= true;
        } 

        return res;
}
