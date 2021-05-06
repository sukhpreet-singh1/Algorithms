//recurive approach + memoization =>DP

int t[1001][1001];
    Solution()
    {
        for(int i=0;i<1001;++i)
        for(int j=0;j<1001;++j)
        t[i][j]=-1;
    }
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
        if(n==0 || W==0)
            return 0;
        
        if(t[n][W]!=-1)
            return t[n][W];
       
        if(wt[n-1]<=W)
        {
            return t[n][W]=max(val[n-1]+knapSack( W-wt[n-1], wt, val,n-1),knapSack(W,wt,val,n-1));
        }
        else if(wt[n-1]>W)
            return t[n][W]=knapSack(W,wt,val,n-1) ;
            
            
    }
