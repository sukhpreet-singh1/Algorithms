 string removeConsecutiveCharacter(string S)
    {
        // code here.
        string a="";
        a+=S[0];
        char arr=S[0];
        for(int i=1;i<S.size();++i)
        {
            if(S[i]==arr)
            {
                continue;
            }
            if(S[i]!=arr)
            {
                a+=S[i];
                arr=S[i];
            }
        }
        return a;
    }
