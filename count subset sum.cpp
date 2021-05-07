//count number of subsequence with given sum 


int numSubseq(vector<int>& nums, int target) {
        int t[nums.size()+1][target+1];
        for(int i=0;i<=nums.size();++i)
            t[i][0]=1;
        for(int j=1;j<=target;++j)
            t[0][j]=0;
        for(int i=1;i<=nums.size();++i)
        {
            for(int j=1;j<=target;++j)
            {
                if(nums[i-1]<=j)
                    t[i][j]=nums[i-1]+t[i-1][j-nums[i-1]]+t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[nums.size()+1][target];
    }
