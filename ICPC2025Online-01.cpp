#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;

struct Node{
    ll val;
    Node *left, *right;
    Node(ll v) : val(v), left(nullptr), right(nullptr) {}
};

struct BSTCheck{
    bool isBST;
    ll minVal, maxVal;
    ll sum;
};

BSTCheck solveBST(Node* node, ll &maxSum){
  if (!node) return {true, LLONG_MAX, LLONG_MIN, 0};

  BSTCheck L = solveBST(node->left, maxSum);
  BSTCheck R = solveBST(node->right, maxSum);

  BSTCheck curr;
  curr.sum= L.sum + R.sum + node->val;
  curr.minVal= min((ll)node->val, L.minVal);
  curr.maxVal= max((ll)node->val, R.maxVal);

  curr.isBST= L.isBST && R.isBST && (node->val > L.maxVal) && (node->val < R.minVal);

  if(curr.isBST) maxSum= max(maxSum, curr.sum);

  return curr;
}

int main(){
    fastio

#ifdef TESTING
    freopen("input.txt", "r", stdin);
#else
#define endl "\n"
#endif

    vector<ll> vec;
    vec.reserve(100000); // 10^5

    ll x;
    while(cin>>x) vec.push_back(x);

    if(vec.empty() || vec[0] < 0){
        cout<<0<<endl;
        return 0;
     }

    int n = (int)vec.size();
    Node* root = new Node(vec[0]); 
    queue<Node*> q;
    q.push(root);
   int i=1;

  while(!q.empty() && i<n){
    Node *curr= q.front();
    q.pop();
    if(i<n){
      if(vec[i] >= 0){
        curr->left= new Node(vec[i]);
        q.push(curr->left);
      }
      i++;
    }
    if(i<n){
      if(vec[i] >= 0){
        curr->right= new Node(vec[i]);
        q.push(curr->right);
      }
      i++;
   }
  }
    ll maxsum =0;
    solveBST(root, maxsum);
    cout<<maxsum<<endl;

    return 0;
}
