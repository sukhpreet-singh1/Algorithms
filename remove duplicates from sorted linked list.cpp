ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
            while(ptr->next!=NULL && ptr->val==ptr->next->val)
            {
                ptr->next=ptr->next->next;
               
            }
             ptr=ptr->next;
            
        }
        return head;
    }
