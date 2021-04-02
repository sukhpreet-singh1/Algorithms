 vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>>a;
        int n=arr.size();
        sort(arr.begin(),arr.end());
       for (int i = 0; i < n - 3; i++)
        {
        for (int j = i+1; j < n - 2; j++)
        {
            int l = j + 1;
            int r = n-1;
            while (l < r)
            {
                vector<int>m;
                if( arr[i] + arr[j] + arr[l] + arr[r] == k)
                {
                    m.push_back(arr[i]);
                    m.push_back(arr[j]);
                    m.push_back(arr[l]);
                    m.push_back(arr[r]);
                    l++; r--;
                }
                else if (arr[i] + arr[j] + arr[l] + arr[r] < k)
                    l++;
                else 
                    r--;
                if(m.size()!=0)
                    a.push_back(m);
            } 
        }
        return a;
    } 
