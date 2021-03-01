int minimum_difference(int arr[],int n,int k)
{
	if(n==1)
		return 0;
	sort(arr,arr+n);
	
	int ans=arr[n-1]-arr[0];
	int small=arr[0]+k;
	int big=arr[n-1]-k;
	
	if(small>big)
		swap(small,big);
	for(int i=1;i<n-1;++i)	
	{
		int add=arr[i]+k;
		int subtract=arr[i]-k;
		if(add<=big || subtract>=small)
			continue;
		if(add-small>=subtract-big)
			small=subtract;
		else
			big=add;		
	}
	return min(ans,big-small);
}	
	
