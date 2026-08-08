#include<bits/stdc++.h>
#include<queue>
//Implement a tree - node struct then invert the tree (preferrably with recursion)
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
void printLevelOrder(TreeNode* root){
    if(root == nullptr)
        return;

    std::queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode* cur = q.front();
        q.pop();

        std::cout << cur->val << " ";

        if(cur->left)
            q.push(cur->left);

        if(cur->right)
            q.push(cur->right);
    }
}
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
  std::cout<<root->val;
  //recurse
  printTree(root->left);
  printTree(root->right);

};
void invert(TreeNode* root){
  if(root == nullptr ) return;
  TreeNode * temp = root;
  root->right = root->left;
  temp = root->left;
  root->left = temp;
  invert(root->right);
  invert(root->left);
  
}
int main(){
  TreeNode* t = new TreeNode(4);
  t->right = new TreeNode(7);
  t->left = new TreeNode(2);
  t->right->left = new TreeNode(6);
  t->right->right = new TreeNode(9);
  t->left->left = new TreeNode(1);
  t->left->right = new TreeNode(3);
  //printTree(t);
  //std::cout<<"\n"<<" ";
  //Inverting a binary tree
  invert(t);
  printLevelOrder(t);

  return 0;


}
//first test 
//
//4,2,7,1,3,6,9
