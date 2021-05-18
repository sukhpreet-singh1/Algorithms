vector <int> bottomView(Node *root)
{
   // Your Code Here
    map<int,int>m;
    vector<int>arr;
    if(root==NULL)
        return arr;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        Node*ptr=q.front().first;
        int h=q.front().second;
        q.pop();
        m[h]=ptr->data;
        if(ptr->left)
        {
            q.push({ptr->left,h-1});
        }
        if(ptr->right)
        {
            q.push({ptr->right,h+1});
        }
    }
    for(auto i:m)
    {
        arr.push_back(i.second);
    }
    
    return arr;
}

