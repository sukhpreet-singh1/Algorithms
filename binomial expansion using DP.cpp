 //finding binomial coefficient using DP top down approach
 
 int nCr(int n, int k){
        int t[n+1][k+1];
        t[0][0]=1;
        for(int i=1;i<=n;++i)
            t[i][0]=1;
        for(int j=1;j<=k;++j)
            t[0][j]=0;
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=k;++j)
            {
                if(i==j)
                    t[i][j]=1;
                else if(i<j)
                {
                    t[i][j]=0;
                }
                else
                {
                    t[i][j]=(t[i-1][j-1]+t[i-1][j])%1000000007;
                }
            }
        }
        return t[n][k];
    }
