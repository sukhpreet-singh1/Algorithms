void finding_min_max(int arr[],int n)
{
	int min=INT_MAX;
	int max=INT_MIN;
	for(int i=0;i<n;++i)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];	
	}
	cout<<min <<" "<<max;
}

