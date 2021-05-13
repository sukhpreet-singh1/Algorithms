 vector<int> rightView(Node *root)
    {
       // Your Code here
        vector<int>arr;
        if (!root)
	        return arr;
	    queue<Node*> q;
	    q.push(root);
	 
        while(!q.empty())
        {    
            int n = q.size();
            for(int i = 1; i <= n; i++)
            {
                Node* temp = q.front();
                q.pop();          
                if(i == 1)
                    arr.push_back(temp->data);
                if(temp->right != NULL)
                    q.push(temp->right);
                if(temp->left != NULL)
                    q.push(temp->left);
     	 
            }
        }
    }
