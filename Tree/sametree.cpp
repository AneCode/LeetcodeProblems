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
      bool  solve( TreeNode* p,TreeNode *q,bool v){
        if(p==NULL && q==NULL)
           return v;
        
        if(v==false)
         return v;
        
        if(p==NULL|| q==NULL)
            return false;
        if(p->val !=  q->val )
            return false;
          
        
         bool x=solve(p->left,q->left,v)==false?false:v;
         bool y=solve(p->right,q->right,v)==false?false:v;
      
         v=(x==false || y==false)?false:v; 
        return v;
            
    } 
    bool isSameTree(TreeNode* p, TreeNode* q) {
     return solve(p,q,true);
    }
};
