vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int l=nums[0];
        for(int i=1;i<nums.size();++i)
        {
            l^=nums[i];
        }
        int k=l&~(l-1);
        int x=0,y=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]&k)
                x^=nums[i];
            else
                y^=nums[i];
        }
        vector<int>a;
        if(x<y)
        {
            a.push_back(x);
            a.push_back(y);
            
        }   
        else
        {
            a.push_back(y);
            a.push_back(x);
            
        }
    

        return a;        
    }
