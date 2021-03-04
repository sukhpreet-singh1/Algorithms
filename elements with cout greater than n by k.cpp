int count_elements(int arr[],int n,int k)
{
	int x=n/k;
	unordered_map<int,int>a;
	for(int i=0;i<n;++i)
	{
		a[arr[i]]++;
	}
	int count=0;
	for(auto i : a)
	{
		if(i.second>=x)
			count++;
	}
	return count;
}
