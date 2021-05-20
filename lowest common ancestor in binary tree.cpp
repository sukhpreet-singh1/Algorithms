bool findPath(Node *root,vector<Node*>&arr,int x)
    {
        if(root==NULL)
            return false;
        arr.push_back(root);
        if(root->data==x)
        {
            return true;
        }
        if(root->left && findPath(root->left,arr,x) || root->right && findPath(root->right,arr,x))
        {
            return true;
        }
        arr.pop_back();
        return false;
    }
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here 
       
       vector<Node*>arr1;
       vector<Node*>arr2;
       if(!findPath(root,arr1,n1) || !findPath(root,arr2,n2))
            return NULL;
        int i;
        for(i=0;i<arr1.size() && i<arr2.size();++i)
        {
            if(arr1[i]->data!=arr2[i]->data)
            {
                break;
            }
        }
        return arr1[i-1];
            
                
    }
