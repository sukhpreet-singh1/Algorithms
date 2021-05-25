vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        unordered_set<int>s(aliceSizes.begin(),aliceSizes.end());
        int diff=accumulate(aliceSizes.begin(),aliceSizes.end(),0)-accumulate(bobSizes.begin(),bobSizes.end(),0);
        diff/=2;
        vector<int>arr;
        for(auto i:bobSizes)
        {
            if(s.count(i+diff)!=0)
            {
                 arr.push_back(i+diff);
                 arr.push_back(i); 
                 break;
            }
        }
        return arr;
    }
