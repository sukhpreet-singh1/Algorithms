unordered_map<string,int>dp;
int solve(string A,vector<string> B)
{
        int len=A.size();
        if(len==0)
            return 1;
        if(dp[A]!=0)
            return dp[A];
       
        for(int i=1;i<=len;++i) 
        {
             int flag=0;
            for(int j=0;j<B.size();++j)
            {
                if(A.substr(0,i).compare(B[j])==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1 && solve(A.substr(i,len-i),B)==1)
            {
                dp[A]=1;
                return dp[A];
            }
        }
        dp[A]=-1;
        return dp[A];
    
}
