  string findSubString(string str)
    {
        // Your code goes here   
        unordered_map<char,int>dp;
        set<int>abc;
        for(int i=0;i<str.size();++i)
        {
            abc.insert(str[i]);
        }
        int n=abc.size();
        int i=0;
        int j=1;
        dp[str[i]]++;
        int count=1;
        int ans=100000;
        while(i<=j && j<str.size())
        {
            if(count<n)
            {
                if(dp[str[j]]==0)
                    count++;
                dp[str[j]]++;
                j++;    
            }
            else if(count==n)
            {   
                ans=min(ans,j-i);
                if(dp[str[i]]==1)
                    count-=1;
                    dp[str[i]]--;
                    i++;
            }
        }
        while(count==n)
        {
            ans=min(ans,j-i);
              if(dp[str[i]]==1)
                    count-=1;
                    dp[str[i]]--;
                    i++;
        }
        string a="";
        for(int i=0;i<ans;++i)
            a+='a';
        return a;    
        
    }
