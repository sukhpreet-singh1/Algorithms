Node* insert(Node* root, int Key)
{
    // Your code here
    if(root==NULL)
    {
       return new Node(Key);
    }
    if(Key==root->data)
        return root;
    if(Key>root->data)
    {
          root->right=insert(root->right,Key);

    }
    else
            root->left=insert(root->left,Key);
      
    return root;    
    
    
}
