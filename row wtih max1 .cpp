int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int index=0;
	    for(int i=0;i<m;++i)
	    {
	        if(arr[0][i]==1)
	        {
	           index=i;
	           break;
	        }    
	    }
	    int max=-1;
	    for(int i=0;i<n;++i)
	    {
	        while(index>=0 && arr[i][index]==1)
	        {
	            index-=1;
	            max=i;
	        }
	    }
	    return max;
	}

