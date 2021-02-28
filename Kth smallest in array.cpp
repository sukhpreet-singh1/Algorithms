//using sorting to get the kth smallest
int kth_smallest(int arr[],int n,int k)
{
	sort(arr,arr+n);
	return arr[k-1];
}
//O(nlogn) 
//using min heap to find the kth smallest

class minheap
{
	int *heap;
	int capacity;
	int heap_size;
	public:
		minheap(int arr[],int n);
		void minheapify(int i);
		int parent() return (i-1)/2;
		int left() return 2*i+1;
		int right() return 2*2+2;
		int extractmin();
		int getmin() return heap[0];
					
}

minheap::minheap(int arr[],int size)
{
	heap_size=size;
	heap=arr;
	int i=(heap_size-1)/2
	while(i!=0)
	{
		minheapify(i);
		i--;
	}
}
minheap::minheapify(int i)
{
	int left=left(i);
	int right=right(i);
	int smallest=i;
	if(left<heap_size && heap[left]<heap[smallest])
		smallest=left;
	if(right<heap_size && heap[right]<heap[smallest])
		smallest=right;
	if(smallest!=i)
		swap(&heap[smallest],&heap[i]);
	minheapify(smallest);		
}
minheap::extractmin()
{
	if(heap_size==0)
		return -1;
	int root=heap[0];
	if(heap_size>1)
	{
		heap[0]=heap[heap_size-1];
		minheapify(0);
		
	}
	heap_size--;
	return root;
}
//O(n+klog(n))

