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
    vector<int> levelOrder(TreeNode* root) {
        vector<int>ans;
        if(!root)
        return ans;
        deque<TreeNode*>store;
        store.push_back(root);
        while(store.size()>0){
            TreeNode*temp=store.front();
            store.pop_front();
            ans.push_back(temp->val);
            if(temp->left)
            store.push_back(temp->left);
            if(temp->right)
            store.push_back(temp->right);
        }
        return ans;
    }
};