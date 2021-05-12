void leveling(Node* node,int level)
    {
        if(node==NULL)
            return;
        if(level==1)
            {
                    arr.push_back(node->data);
            }
        else{
            leveling(node->left,level-1);
            leveling(node->right,level-1);
            
        }    
    }
    
    
    vector<int> levelOrder(Node* node)
    {
      //Your code here
        int h=height(node);
        for(int i=1;i<=h;++i)
        {
            leveling(node,i);
        }
        return arr;
    }
