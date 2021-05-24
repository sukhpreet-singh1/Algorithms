 ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* evenptr=head->next;
        while(even!=NULL && even->next!=NULL)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;
            even=even->next;
            odd=odd->next;
        }
        
        odd->next=evenptr;
        return head;
    }
