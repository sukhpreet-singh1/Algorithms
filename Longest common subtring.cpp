 //longest common substring using Dp
 
 int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here  
        int t[n+1][m+1];
        t[0][0]=0;
        for(int i=1;i<=n;++i)
        {
            t[i][0]=0;
        }
        for(int i=1;i<=m;++i)
        {
            t[0][i]=0;
        }
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                t[i][j]=0;
            }
        }    
        int result=0;
        
        for(int i=1;i<=n;++i)
        {
            for(int j=1;j<=m;++j)
            {
                if(S1[i-1]==S2[j-1])
                  {
                      t[i][j]=1+t[i-1][j-1];
                      result=max(t[i][j],result);
                  }
                  else t[i][j]=0;
            }
        }
        return result;
    }
