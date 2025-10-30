#include<iostream>
#include <climits>
#include<vector>
using namespace std;

class BST{
private:
  vector<int> nodes;

  struct TreeNode{
   int val;
   TreeNode *left, *right;
   TreeNode(int v, TreeNode *l=nullptr, TreeNode *r=nullptr): val(v), left(l), right(r) {}
 }*root;

  TreeNode* insertRec(TreeNode* node, int val){
    if(!node) return new TreeNode(val);
    if(val < node->val)  node->left = insertRec(node->left, val);
    else  node->right = insertRec(node->right, val);
    return node;
  }

  bool isValidBSTRec(TreeNode* node, long minVal, long maxVal){
    if(!node) return true;
    if(node->val <= minVal || node->val >= maxVal) return false;
    return isValidBSTRec(node->left, minVal, node->val) && isValidBSTRec(node->right, node->val, maxVal);
  }

  void DeleteTree(TreeNode* node){
    if(!node) return;
    DeleteTree(node->left);
    DeleteTree(node->right);
    delete node;
  }

public:
  BST() : root(nullptr) {}

  void insert(int val){
    root = insertRec(root, val);
  }

  bool isValidBST(){
    return isValidBSTRec(root, LONG_MIN, LONG_MAX);
  }

  void BadTree(){
    root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->right->left = new TreeNode(6); // problematic node
    root->right->right = new TreeNode(20);
  }

  ~BST(){
    DeleteTree(root);
  }
};

int main(){
  BST tree1;
  tree1.insert(10);
  tree1.insert(5);
  tree1.insert(15);
  tree1.insert(12);
  tree1.insert(18);

  if(tree1.isValidBST()) cout<<"Tree1 is a valid BST"<<endl;
  else cout<<"Tree1 is not a valid BST"<<endl;

  BST tree2;
  tree2.BadTree();

  if(tree2.isValidBST()) cout<<"Tree2 is a valid BST"<<endl;
  else cout<<"Tree2 is not a valid BST"<<endl;

  return 0;
}

/* Another approach using inorder traversal to validate BST
    vector<int> checker;
      bool isValidBST(TreeNode* root){
        inOrder(root);
        return Helper(checker);
    }

    void inOrder(TreeNode* node){
        if(!node) return;
        inOrder(node->left);
        checker.push_back(node->val);
        inOrder(node->right);
    }

    bool Helper(vector<int> res){
        for(int i=1; i<res.size(); i++){
            if(res[i] <= res[i-1])  return false;
        }

        return true;
    }
*/
