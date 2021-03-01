int kadane_algorithm(int arr[],int n)
{
	int maximum=0;
	int max=0;
	for(int i=0;i<n;++i)
	{
		maximum=maximum+arr[i];
		if(max<maximum)
			max=maximum;
		if(maximum<0)
			maximum=0;	
	}
	return max;
}
