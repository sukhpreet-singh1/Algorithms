int lps(string str)
	{
	     int n = str.length();
         if(n < 2) 
         {
            return 0;
         }
         int len = 0;
         int i = 1;
         while(i < n)
        {
            if(str[i] == str[len]) 
            {
                ++len;
                ++i;
            }
            else
            {
                i = i - len + 1;
                len = 0;
            }
        }
  
        return len;

	}
