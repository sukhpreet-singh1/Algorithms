//remove duplicates from sorted linked list
Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node *current=head;
    while(current->next!=NULL)
    {
        if(current->data==current->next->data)
        {
            current->next=current->next->next;
        
        }
        else
            current=current->next;
    }
    return head;
}
