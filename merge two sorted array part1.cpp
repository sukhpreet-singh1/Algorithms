void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=0,j=0;
	    for(int i=0;i<n;++i)
	    {
	        if(arr1[i]<arr2[0])
	            continue;
	        else
	        {
	            swap(arr1[i],arr2[0]);
	            for(int j=0;j<m-1;++j)
	            {
	                if(arr2[j]<arr2[j+1])
	                    continue;
	               else
	                    swap(arr2[j],arr2[j+1]);
	            }
	            
	        }
	    }
	}
