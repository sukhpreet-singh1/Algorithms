 struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        if(head == NULL || head->next==NULL)
            return head;
        Node* rest=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return rest;
    }
    
