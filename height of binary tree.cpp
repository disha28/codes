int height(struct Node* node){
        if(node==NULL)
        return 0;
        int lheight=height(node->left);
        int rheight=height(node->right);
        if(lheight>rheight)
        return (lheight+1);
        else
        return (rheight+1);
        
        
        // code here 
    }
};