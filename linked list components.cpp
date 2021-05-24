 int numComponents(ListNode* head, vector<int>& nums) {
        int count=0;
        unordered_set<int>s(nums.begin(),nums.end());
        ListNode* ptr=head;
        while(ptr!=NULL)
        {
          if(s.count(ptr->val) && (ptr->next==NULL || !s.count(ptr->next->val)) )
              count++;
            ptr=ptr->next;
        }
        return count;
    }
