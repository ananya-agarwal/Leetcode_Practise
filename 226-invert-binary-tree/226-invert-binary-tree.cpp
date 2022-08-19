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
    TreeNode* invertTree(TreeNode* root)
    {
        if(!root)
            return NULL;
        
        invertTree(root->left);
        invertTree(root->right);
        
        TreeNode *temp;
        temp=root->left;
        root->left=root->right;
        root->right=temp;

        return root;
    }
};

//keep on calling recursion on left and right subtree 
//jab u come at the leaf node, return from there 
//neeche se ek ek krke trees me left and right pointers will get interchanged
//bilkul last step pr poora left and right subtree of the root will get swapped