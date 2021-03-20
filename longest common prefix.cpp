string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==0)
            return "";    
        for(int j=0;j<strs[0].size();++j)
        {
            int count=0;
                    for(int i=0;i<strs.size();++i)
                    {
                        if(strs[0][j]==strs[i][j])
                        {
                            count=1;
                            
                        }   
                        else
                        {
                            count=0;
                            break;
                        }    
                    }    
            if(count==1)
                ans+=strs[0][j];
            else
                return ans;
        }    
       return ans;     
        
    }
