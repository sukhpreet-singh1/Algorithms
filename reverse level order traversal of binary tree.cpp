vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>arr;
    if(root==NULL)
        return arr;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {   
        Node *t=q.front();
        arr.push_back(t->data);
        if(t->right!=NULL)
        {
            q.push(t->right);
        }
        if(t->left!=NULL)
        {
            q.push(t->left);
        }
        q.pop();
    }
    reverse(arr.begin(),arr.end());
    return arr;
}
