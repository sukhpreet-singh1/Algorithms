vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int>arr;
	stack<Node*>current;
	stack<Node*>next;
	if(root==NULL)
	    return arr;
	current.push(root);
	
	bool lefttoright=true;
	while(!current.empty())
	{
	    Node* t=current.top();
	    current.pop();
	    if(t)
	    {
	        arr.push_back(t->data);
	        if(lefttoright)
	        {
	            if(t->left)
	                next.push(t->left);
	            if(t->right)
	                next.push(t->right);
	        }
	        else
	        {
	             if(t->right)
	                next.push(t->right);
	             if(t->left)
	                next.push(t->left);
	        }
	    }
	    if(current.empty())
	    {
	        lefttoright=!lefttoright;
	        swap(current,next);
	    }
	  
	    
	}
	return arr;
}
