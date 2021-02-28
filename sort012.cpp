//dutch national flag algorithm or 3 way partitioning
//time complexity O(n)
void sort012(int arr[],int n)
{
	int low,mid,high;
	low=0;
	mid=0;
	high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swap(arr[low],arr[mid]);
			low++;
			mid++;
		}
		if(arr[mid]==1)
		{
			mid++;
		}
		if(arr[mid]==2)
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}

//counting sort
//time complexity O(n)
void sort012(int arr[],int n)
{
	int count[3]={};
	for(int i=0;i<n;++i)
		count[arr[i]]++;
	int j=0;
	while(count[0]!=0)
	{
		arr[j]=0;
		j++;
		count[0]--;
	}
	while(count[1]!=0)
	{
		arr[j]=1;
		j++;
		count[1]--;
	}
	while(count[2]!=0)
	{
		arr[j]=2;
		j++;
		count[2]--;
	}
		
}

