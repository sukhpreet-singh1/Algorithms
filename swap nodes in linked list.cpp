ListNode* swapNodes(ListNode* head, int k) {
        int len=length(head);
        ListNode* ptr=head;
        ListNode* a=head;
        ListNode* b=head;
        int count=1;
        while(a!=NULL)
        {
            if(count==k)
            {
                break;
            }
            count++;
            a=a->next;
        }
        count=1;
        while(b!=NULL)
        {
            if(count==len-k+1)
            { 
                break;
            }
             count++;
             b=b->next;
        }
        swap(a->val,b->val);
       
        return head;
    }

