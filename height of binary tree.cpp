 int height(struct Node* node){
        // code here 
        if(node==NULL)
            return 0;
        if(node->left==NULL and node->right==NULL)
            return 1;
        else
        {
            int l=height(node->left);
            int r=height(node->right);
            if(l>r)
                return l+1;
            else
                return r+1;
        }
    }
