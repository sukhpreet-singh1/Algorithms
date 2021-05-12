int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    unordered_set<Node*>m;
    while(head1!=NULL)
    {
        m.insert(head1);
        head1=head1->next;
    }
    int x;
    while(head2!=NULL)
    {
        if(m.find(head2)!=m.end())
        {
            return head2->data;
           
        }
        else
        {
         head2=head2->next;
            
        }
    }

}

