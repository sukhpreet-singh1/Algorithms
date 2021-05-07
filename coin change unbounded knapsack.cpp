 //unbounded knapsack coin change solution in DP top down approach
 
 
 long long int count( int S[], int m, int n )
    {
       
        //code here.
        long long int t[m+1][n+1];
        t[0][0]=1;
        for(long long int i=1;i<=m;++i)
        {
            t[i][0]=1;
        }
        for(long long int i=1;i<=n;++i)
        {
            t[0][i]=0;
        }
        for(long long int i=1;i<=m;++i)
        {
            for(long long int j=1;j<=n;++j)
            {
                if(S[i-1]<=j)
                {
                    t[i][j]=t[i-1][j]+t[i][j-S[i-1]];
                }
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[m][n];
    }
