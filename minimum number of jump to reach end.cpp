//dynamic programming
//O(n^2)
int minimum_jumps(int arr[], int n){
     
	int dp[n];
	for(int i=0;i<n;++i)
		dp[i]=INT_MAX;
	dp[0]=0;
	for(int i=1;i<n;++i)
	{
		for(int j=0;j<i;++j)
		{
			if(dp[j]!=INT_MAX && arr[j]+j>=i)
			{
				if(dp[j]+1<dp[i])
					dp[i]=dp[j]+1;
			}
		}
	}	
	if(dp[n-1]!=INT_MAX)	
		return dp[n-1];
	else
		return -1;	
}	

// simple apporach 
//O(n)
int minimum_steps(int arr[],int n)
{
		int maxreach=arr[0];
	int step=arr[0];
	int jump=1;
	if(n==1)
		return 0;
	else if(arr[0]==0)
		return -1;
	else
	{		
	for(int i=1;i<n;++i)
	{
		if(i==n-1)
			return jump;
		maxreach=max(maxreach,arr[i]+i);
		step--;
		if(step==0)
		{
			jump++;
			if(i>=maxreach)
				return -1;
			step=maxreach-i;	
		}		
	}
	}

}

