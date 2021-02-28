//iterative way
void reverse_array(int a[],int start,int end)
{
	while(start<end)
	{
		// swapping from start and end;
		int temp = a[start];
		a[start] = a[end];
		a[end]=start;
		start++;
		end--;
		
	}
}

//Recursion way
void reverse_array(int a[],int start, int end)
{
	if(start>end)
	{
		return;
	}
	int temp = a[start];
	a[start] = a[end];
	a[end]=temp;
	
	reverse_array(int a[],start+1,end-1);
}
