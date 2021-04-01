int Search_in_step_size_arr(int arr[],int n,int x,int k)
{
	int i=0;
	while(i<n)
	{
		if(arr[i]==x)
			return i;
		i=i+max(1,abs(int(arr[i]-x)/k));	
		
	}
	return -1;
}
a
