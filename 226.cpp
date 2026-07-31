#include<bits/stdc++.h>
class TreeNode {
  public:
  int val;
  TreeNode* right;
  TreeNode* left;
  //constructors
  TreeNode(): val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right): val(x), left(left), right(right){}

};
//Helper function to print the tree from root
void printTree(TreeNode* root){
  if(root == NULL) return;
  printTree(root->right);
  std::cout<<root->val;
  printTree(root->left);
};
//Top down, left right 
void printTLDR(TreeNode* root){
  if(root == NULL ) return;

};
int main(){
  TreeNode* t = new TreeNode(1);
  t->right = new TreeNode(3);
  t->left = new TreeNode(2);

  t->right->left = new TreeNode(4);
  printTree(t);
  return 0;


}
