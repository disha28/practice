class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>v;
        TreeNode *curr=root;
        while(curr!=NULL ||s.empty()==false)
        {
            while(curr!=NULL)
            {
                s.push(curr);
                curr=curr->left;
            }
            
            curr=s.top();
            s.pop();
            v.push_back(curr->val);
            curr=curr->right;
            
        }
        return v;
        
    }
};