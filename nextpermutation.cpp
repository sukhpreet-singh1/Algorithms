void nextPermutation(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;++i)
        {
            if(nums[i]>nums[i+1])
                count=1;
            else
            {
                count=0;
                break;
            }   
        }
        if(count==1)
        {
            for(int i=nums.size()-1;i>=0;--i)
                cout<<nums[i]<<" ";
        }
        int index=0;
        for(int i=nums.size()-1;i>=0;--i)
        {
            if(nums[i]>nums[i-1])
            {
                index=i;
                break;
            }
        }
        int rep=index-1;
        int ans;
        for(int i=index;i<nums.size();++i)
        {
            if(nums[i]>=nums[rep] && nums[i]<=nums[index])
            {
                ans=i;
            }
        }
        int temp=nums[rep];
        nums[rep]=nums[ans];
        nums[ans]=temp;
        for(int i=0;i<nums.size();++i)
        {
            cout<<nums[i]<<" ";
        }
    }
