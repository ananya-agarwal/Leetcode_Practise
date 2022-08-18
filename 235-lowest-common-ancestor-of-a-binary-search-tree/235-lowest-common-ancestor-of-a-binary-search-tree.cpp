/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(root == NULL)
            return NULL;
        
        int curr = root->val;
        
        if(p->val>curr && q->val>curr)
            return lowestCommonAncestor(root->right, p,q);
               
        if(p->val<curr && q->val<curr)
            return lowestCommonAncestor(root->left, p,q);
        
        return root;
    }
};

//LCA is the point/parent jaha se splitting start hojayegi when we will travel from top to bottom