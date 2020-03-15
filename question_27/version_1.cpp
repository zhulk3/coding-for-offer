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
    TreeNode* mirrorTree(TreeNode* root) {
        if(root==NULL)
        return NULL;
        if(root->left==NULL&&root->right==NULL)
        return root;
        TreeNode*temp=root->left;
        root->left=root->right;
        root->right=temp;
        mirrorTree(root->left);
        mirrorTree(root->right);
        return root;
    }
};