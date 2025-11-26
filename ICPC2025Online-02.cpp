#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> scores;
vector<pair<char, string>> actions;
map<pair<int, int>, int> memo;

int solve(int mask,int idx){
    if(idx == M)  return 0;
    
    auto key = make_pair(mask, idx);
    if(memo.count(key)) return memo[key];
    
    char engineer = actions[idx].first;
    string action = actions[idx].second;
    
    vector<int> available;
    for(int i = 0; i<N; i++)
      if(!(mask & (1 << i)))  available.push_back(i);    
    
    if(available.empty()) return memo[key] = solve(mask, idx + 1);
    
    int result;
    if(engineer== 'A')  result = INT_MIN;
    else result = INT_MAX;
    
    for(int i :available){
      int new_mask = mask | (1<< i);
      int future_diff = solve(new_mask, idx + 1);
      int current_contribution = 0;
    
    if(action=="pick"){
      if(engineer=='A') current_contribution = scores[i];
      else  current_contribution = -scores[i];    
    }
        
    int total_diff = current_contribution+future_diff;

    if(engineer=='A') result = max(result, total_diff);
    else result = min(result, total_diff);    
    }
    
    return memo[key] = result;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifdef TESTING
  freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

  cin>>N;
  scores.resize(N);
  for(int &i:scores)  cin>>i;
    
  cin>>M;
  actions.resize(M);
  string engineer_str, action_str;
  for(int i= 0; i< M;i++){
    cin>>engineer_str>>action_str;
    actions[i] ={engineer_str[0],action_str};
  }
    
  int diff =solve(0, 0);
  if(diff>0)  cout<<"A "<<diff<<"\n";
  else if(diff<0) cout<<"B "<<-diff<<"\n";
  else cout<<"Tie 0\n";
    
    return 0;
}
