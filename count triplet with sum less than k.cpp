	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    long long int count=0;
	    sort(arr,arr+n);
	    for(int i=0;i<n-2;++i)
	    {
	        int j=i+1;
	        int k=n-1;
	        while(j<k)
	        {
	            if(arr[i]+arr[j]+arr[k]>=sum)
	                k--;
	           else
	               {
	                   count+=k-j;
	                    j++;
	               }
	        }
	    }
	    return count;
	}
		 
