//finding union of sorted array not containing the duplicates
//time complexity O(m+n)
void union(int arr1[], int arr2[],int n,int m)
{
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			cout<<arr1[i]<<" ";
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			cout<<arr2[j]<<" "; 
			j++;
		}
		else
		{
			cout<<arr1[i]<<" ";
			i++;
			j++;
		}
	}
	while(i<n)
	{
		cout<<arr1[i];
		i++;
	}
	while(j<m)
	{
		cout<<arr2[j];
		j++;
	}
}

//finding union of sorted array containing the duplicates
void union(int arr1[],int arr2[],int n,int m)
{
	int ans=0;
	int s1=arr1[n-1];
	int s2=arr2[m-1];
	
	if(s1<s2)
		ans=s1;	
	else
		ans=s1;
	int arr[ans+1]={0};
	cout<<arr1[0]<<" ";
	arr[arr1[0]]++;
	for(int i=1;i<n;++i)
	{
		if(arr1[i]!=arr1[i-1])
		{
			cout<<arr1[i]<<" ";
			arr[arr1[i]]++;
		}
		
	}	
	for(int i=0;i<m;++i)
	{
		if(arr[arr2[i]]==0)
		{
			cout<<arr2[i]<<" ";
			arr[arr2[i]]++;
		}
	}
		
}



//find interaction of sorted array
void intersect(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;
	while(i<n && j<m)
	{
		if(arr1[i]>arr2[j])
			j++;
		if(arr1[i]<arr2[j])
			i++;
		if(arr1[i]==arr2[j])
		{
			cout<<arr1[i]<<" ";
			i++;
			j++;
		}		
			
	}
}
