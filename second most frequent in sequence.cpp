string secFrequent (string arr[], int n)
    {
        //code here.
        int count=1;
        unordered_map<string,int>a;
        for(int i=0;i<n;++i)
        {
            a[arr[i]]++;    
        }
        int first_max=INT_MIN,sec_max=INT_MIN;
        for(auto i:a)
        {
            if(i.second>first_max)
            {
                sec_max=first_max;
                first_max=i.second;
            }
            else if(i.second>sec_max && i.second!=first_max)
            {
                sec_max=i.second;
            }
            
        }
        for(auto i:a)
        {
            if(i.second==sec_max)
                return i.first;
        }
        
    }
