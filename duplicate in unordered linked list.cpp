Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_set<int>t;
        Node* current=head;
        Node* prev=NULL;
        while(current!=NULL)
        {
            if(t.find(current->data)==t.end())
            {
                t.insert(current->data);
                prev=current;
            }
            else
            {
                prev->next=current->next;
            }
            current=current->next;
        }
        return head;
    }
