//minimum sum partition using DP(top down approach)


int minDiffernce(int arr[], int n) 
	{ 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;++i)
	        sum+=arr[i];
	    bool t[n+1][sum+1];
	    t[0][0]=true;
	    for(int i=1;i<=n;++i)
	    {
	        t[i][0]=true;
	    }
	    for(int i=1;i<=sum;++i)
	    {
	        t[0][i]=false;
	    }
	    for(int i=1;i<=n;++i)
	    {
	        for(int j=1;j<=sum;++j)
	        {
	            if(arr[i-1]<=j)
	            {
	                t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	            }
	            else
	            {
	                t[i][j]=t[i-1][j];
	            }
	        }
	    }
	    int mindiff=0;
	    for(int i=0;i<=sum/2;++i)
	    {
	        if(t[n][i]==true)
	            mindiff=i;
	    }
	    return sum-2*mindiff;
	}
