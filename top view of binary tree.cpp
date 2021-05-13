vector<int> topView(Node *root)
    {
        //Your code here
        map<int,int>m;
        vector<int>arr;
        if(root==NULL)
            return arr;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
                Node *t=q.front().first;
                int h=q.front().second;
                q.pop();
                if(!m[h])
                    m[h]=t->data;
                if(t->left)
                    q.push({t->left,h-1});
                if(t->right)
                    q.push({t->right,h+1});
            
        }
        for(auto i:m)
        {
            arr.push_back(i.second);
        }
        return arr;
    }
