/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool judge(TreeNode*root1,TreeNode*root2){
    if(root1==nullptr&&root2==nullptr)
    return true;
    if(root1==nullptr||root2==nullptr)
    return false;
    if(root1->val!=root2->val)
    return false;
    return judge(roor1->left,root2->right)&&judge(root1->right,root2->left);
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return judge(root,root);
    }
};