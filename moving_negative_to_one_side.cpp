//two pointer approach
//time complexity O(n)
void negative_on_left(int arr[],int n)
{	
	int start=0;
	int end=n-1;
	while(start<end)
	{
		if(arr[start]<0)
			start++;
		if(arr[start]>0 && arr[end]<0)
		{
			swap(arr[start],arr[end]);
			start++;
			end--;
		}
		if(arr[end]>0)
			end--;
				
	}
}
//using simple run in array
void negative_on_left(int arr[],int n)
{
	int j=0;
	for(int i=0;i<n;++i)
	{
		if(arr[i]<0)
		{
			if(i!=j)
				swap(arr[i],arr[j]);
			j++;	
		}
	}
}
