 //subset sum problem DP(top down )approach solution
 
 
 int equalPartition(int N, int arr[])
    {
     
        // code here
        int sum=0;
        for(int i=0;i<N;++i)
        {
            sum+=arr[i];
        }
         bool t[N+1][sum/2+1];
          
        if(sum%2!=0)
            return 0;
        else
        {
            for(int j=1;j<=sum/2;++j)
                t[0][j]=false;
            for(int i=0;i<=N;++i)
                t[i][0]=true;
            for(int i=1;i<=N;++i)
            for(int j=1;j<=sum/2;++j)
            {
                if(arr[i-1]<=j)
                    t[i][j]=t[i-1][j]||t[i-1][j-arr[i-1]];
                else
                    t[i][j]=t[i-1][j];
                
            }
        }
        return t[N][sum/2];
    }
