long long int maxProduct(int *arr, int n) 
{
        long long int minVal = arr[0]; 
        long long int maxVal = arr[0]; 
        long long int maxProduct = arr[0]; 
        for (long long int i = 1; i < n; i++) 
        { 
        	if (arr[i] < 0) 
        	        swap(maxVal, minVal); 
        	maxVal = max((long long)arr[i],(long long)maxVal * arr[i]); 
        	minVal = min((long long)arr[i],(long long) minVal * arr[i]); 
        	maxProduct = max(maxProduct, maxVal); 
        } 
    	return maxProduct; 
}
