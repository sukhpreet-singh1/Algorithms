bool subArrayExists(int arr[], int n)
{
    //Your code here
    unordered_set<int>s1;
    int sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=arr[i];
        if(sum==0 || s1.find(sum)!=s1.end())
            return true;
        s1.insert(sum);    
            
    }
 return false;
}
