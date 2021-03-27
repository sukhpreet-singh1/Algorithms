vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int>a;
    int first=-1;
    int last=-1;
    for(int i=0;i<n;++i)
    {
        if(arr[i]!=x)
            continue;
        if(first==-1)
            first=i;
        last=i;    
    }    
    a.push_back(first);
    a.push_back(last);
    return a;
}
