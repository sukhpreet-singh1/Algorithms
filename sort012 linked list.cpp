 Node* segregate(Node *head) {
        
        // Add code 
        int c0=0;
        int c1=0;
        int c2=0;
        Node *root=head;
        while(root!=NULL)
        {
            if(root->data==0)
                c0++;
            else if(root->data==1)
                c1++;
            else
                c2++;
            root=root->next;    
        }
        Node *ptr=head;
        while(ptr!=NULL)
        {
            while(c0)
            {
                ptr->data=0;
                c0--;
                ptr=ptr->next;
            }
             while(c1)
            {
                ptr->data=1;
                c1--;
                ptr=ptr->next;
            } while(c2)
            {
                ptr->data=2;
                c2--;
                ptr=ptr->next;
            }
        
        }
        return head;
        
    }
