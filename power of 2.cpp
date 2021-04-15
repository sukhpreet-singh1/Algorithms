 bool isPowerofTwo(long long n){
        
        // Your code here    
        if(n==0)
            return false;
        else    
            return (ceil(log2(n))==floor(log2(n)));
    }
