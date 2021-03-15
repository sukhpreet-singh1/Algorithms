 int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int>s1;
        for(int i=0;i<n;++i)
        {
            s1[arr[i]]++;
        }
        int temp=0;
        for(int i=0;i<n;++i)
        {
            temp+=s1[k-arr[i]];
            if(k-arr[i]==arr[i])
            temp--;
        }
        return temp/2;
    }
