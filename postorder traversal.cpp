  vector<int> postorderTraversal(TreeNode* root) {
        
    stack<TreeNode*>s1,s2;
        vector<int>v;
        if(root==NULL)
            return v;
        s1.push(root);
        TreeNode *temp;
        while(s1.empty()==false)
        {
            temp=s1.top();
            s2.push(temp);
            s1.pop();
            if(temp->left)
                s1.push(temp->left);
            if(temp->right)
                s1.push(temp->right);
        }
        while(s2.empty()==false)
        {
            temp=s2.top();
            s2.pop();
            v.push_back(temp->val);
        }
        return v;
        
        
    }
};