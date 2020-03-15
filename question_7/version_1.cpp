
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 TreeNode*construct(vector<int>&preorder,vector<int>&inorder,int sP,int eP,int sI,int eI){
     if(sP>eP||sI>eI)
     return nullptr;
     TreeNode* root=new TreeNode();
     int i=0;
     for(i=sI;i<eI;i++)
     if(preorder[sP]==inorder[i])
     break;
     root->val=preorder[sP];
     root->left=construct(preorder,inorder,sP+1,sP+i-sI,sI,i-1);
     root->right=construct(preorder,inorder,sP+i-sI+1,eP,i+1,eI);
     return root;

 }

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()<=0||inorder.size()<=0)
        return nullptr;
        int sP=0;
        int eP=preorder.size()-1;
        int sI=0;
        int eI=inorder.size()-1;
        TreeNode*root=construct(preorder,inorder,sP,eP,sI,eI);
        return root;
    }
};