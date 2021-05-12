Node* findIntersection(Node* head1, Node* head2)
{
 
    // Your Code Here
    if(head1==NULL || head2==NULL)
        return NULL;
    if(head1->data<head2->data)
        return findIntersection(head1->next,head2);
    else if(head1->data>head2->data)
        return findIntersection(head1,head2->next);
    Node *temp=new Node(head1->data);
    temp->next=findIntersection(head1->next,head2->next);

    return temp;
}
