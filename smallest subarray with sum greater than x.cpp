int sb(int arr[], int n, int x)
{
    // Your code goes here   
    int start=0;
    int end =0;
    int minlen=n+1;
    int cur=0;
    while(end<n)
    {
        while(cur<=x && end<n)
            cur+=arr[end++];
        while(cur>x && start<n)
           {
               if(end-start<minlen)
               {
                   minlen=end-start;
               }
               cur-=arr[start++];
           }
           
    }
    return minlen;
}
