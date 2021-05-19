int toSumTree(Node *node)
    {
        // Your code here
        if(node==NULL)
            return 0;
        int old=node->data;
        node->data=toSumTree(node->left)+toSumTree(node->right);
        return node->data+old;
    }
