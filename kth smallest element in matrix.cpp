int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
     priority_queue <int, vector<int>, greater<int> > arr;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            arr.push(mat[i][j]);
        }
    }
    int top=0;
    for(int i=0;i<k;++i)
    {
        if(i==k-1)
        {
            top=arr.top();
            break;
        }
        else
            arr.pop();
    }
    return top;
}

