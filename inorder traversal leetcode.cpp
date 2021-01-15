class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL)
            return v;
        if(root->left==NULL &&root->right==NULL)
        {
            vector<int>ans;
            ans.push_back(root->val);
            v.push_back(ans);
            return v;
        }
        TreeNode *temp=root;
        vector<int>ans;
        ans.push_back(temp->val);
        v.push_back(ans);
        
        queue<TreeNode*>q;
         if(temp->left!=NULL)
            q.push(temp->left);
        if(temp->right!=NULL)
            q.push(temp->right);
        
        while(q.empty()==false)
        {
            ans.clear();
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            temp=q.front();
            ans.push_back(temp->val);
            if(temp->left!=NULL)
            q.push(temp->left);
            if(temp->right!=NULL)
            q.push(temp->right);
        
            q.pop();

                
            }
            v.push_back(ans);
        }
    
        return v;
    }
};