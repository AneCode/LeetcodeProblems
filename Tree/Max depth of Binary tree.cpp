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
int max(int x,int y){
    return x>y?x:y;
}
    int maxDepth(TreeNode* root) {
    if(root==NULL)
    return 0;
     queue<TreeNode*>q;
     int count=0;
     q.push(root);
     while(q.empty()==false){
         int size=q.size();
         for(int i=0;i<size;i++){
             TreeNode *temp=q.front();
             q.pop();
             if(temp and temp->left)
             q.push(temp->left);
             if(temp and temp->right)
             q.push(temp->right);
         } 
         count++;
     } 
     return count;     
    }
};
