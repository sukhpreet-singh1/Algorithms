int minFlips (string S)
{
    // your code here
    int count1=0;
    char expected='0';
    
    for(int i=0;i<S.size();++i)
    {
        if(S[i]!=expected)
        {
            count1++;
        }
        expected=expected=='0'? '1': '0';
    }
    int count2=0;
    char expect='1';
    for(int i=0;i<S.size();++i)
    {
        if(S[i]!=expect)
        {
            count2++;
        }
        expect=expect=='0'? '1': '0';
    }
    
    return min(count1,count2);
}
