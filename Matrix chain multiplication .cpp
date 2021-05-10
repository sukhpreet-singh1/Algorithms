 int MCM(int *arr,int i,int j)
    {
        if(i==j)
            return 0;
        if(DP[i][j]!=-1)  
            return DP[i][j];
            
        DP[i][j]=INT_MAX;
        for(int k=i;k<j;++k)
        {
            DP[i][j]=min(DP[i][j],MCM(arr,i,k)+MCM(arr,k+1,j)+arr[i-1]*arr[j]*arr[k]);
        }
        return DP[i][j];
    }
