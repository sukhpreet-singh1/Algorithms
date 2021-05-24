ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prev=NULL;
        ListNode* curr=list1;
        ListNode* list1end=list1;
        int count=1;
        while(curr!=NULL)
        {
            if(count==a)
            {
                break;
            }
            count++;
            prev=curr;
            curr=curr->next;
        }
        count=0;
        while(list1end!=NULL)
        {
            if(count==b)
                break;
            count++;
            list1end=list1end->next;
        }
        list1end=list1end->next;
        curr->next=list2;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=list1end;
        return list1;
        
        
        
    }
