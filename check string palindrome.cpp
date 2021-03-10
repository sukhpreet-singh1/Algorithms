int isPlaindrome(char S[])
{
    // Your code goes here
    int end=strlen(S)-1;
    int start=0;
    while(start<end)
    {
        if(S[start]==S[end])
         {
             start++;
             end--;
             continue;
         }
        else
         {
             return 0;
         }
    }
    
    return 1;
}

