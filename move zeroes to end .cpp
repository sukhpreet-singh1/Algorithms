void moveZeroes(vector<int>& nums) {
        int index=0;
        int count=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]==0)
            {
                count++;
                continue;
            } 
            else
            {
                nums[index]=nums[i];
                index++;
            } 
        }
        for(int i=0;i<count;++i)
        {
            nums[nums.size()-1-i]=0;
        }
    }
