int getDecimalValue(ListNode* head) {
        int length=0;
        ListNode*ptr=head;
        while(head!=NULL)
        {
            head=head->next;
            length++;
        }
        int result=0;
        while(ptr!=NULL)
        {
            result+=pow(2,length-1)*ptr->val;
            ptr=ptr->next;
            length--;
        }
        return result;
        
    }
