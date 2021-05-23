 bool checkZeroOnes(string s) {
        int zeros=0;
        int ones=0;
         int maxzero=0;
        int maxone=0;
       
        if(s[0]=='1')
        {
            ones++;
            maxone=max(maxone,ones);
        }
        else
        {
               zeros++;
             maxzero=max(maxzero,zeros);
        }
        for(int i=1;i<s.size();++i)
        {
            if(s[i]=='0' && s[i-1]=='0')
            {
                zeros++;
                  maxzero=max(maxzero,zeros);
            }
            else if(s[i]=='1' && s[i-1]=='1')
            {
                ones++;
                maxone=max(maxone,ones);
            }
            else if(s[i]=='0' && s[i-1]=='1')
            {
                maxone=max(maxone,ones);
                
                ones=0;
                zeros=1;
            }
            else if(s[i]=='1' && s[i-1]=='0')
            {
                maxzero=max(maxzero,zeros);
                zeros=0;
                ones=1;
            }
        }
        cout<<maxzero<<" "<< maxone;
        return maxzero<maxone?true:false;
    }
