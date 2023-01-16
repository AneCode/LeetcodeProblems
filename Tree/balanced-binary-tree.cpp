/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  int checkTree(TreeNode *root){
      if(root==NULL)
      return 0;
      int lf=checkTree(root->left);
      int rh=checkTree(root->right);
      if(lf==-1 or rh ==-1)
      return -1;
      if(abs(lf-rh)>1)
      return -1;
      return max(lf,rh)+1; 
    
  } 
    bool isBalanced(TreeNode* root) {
        int x=checkTree(root);
        if(x==-1)
        return false;
        return true; 
    }
};
