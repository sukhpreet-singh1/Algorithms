 bool isMonotonic(vector<int>& nums) {
        int countinc=0;
        int countdec=0;
        for(int i=1;i<nums.size();++i)
        {
            if(nums[i]<=nums[i-1])
                countdec++;
            if(nums[i]>=nums[i-1])
                countinc++;
        }
        if(countinc==nums.size()-1 || countdec==nums.size()-1)
            return true;
        else 
            return false;
    }
