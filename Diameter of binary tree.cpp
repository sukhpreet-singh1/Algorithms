 int diameter(Node* root)
    {
    // Your code here
        if(root==NULL)
            return 0;
        else
        {
            int lh=height(root->left);
            int rh=height(root->right);

            int l=diameter(root->left);
            int r=diameter(root->right);
            int k=lh+rh+1;
            return max(max(l,r),k);
        }
    }
