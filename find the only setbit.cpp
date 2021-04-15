 int findPosition(int N) {
        // code here
        if(N==0)
            return -1;
        else if(ceil(log2(N))!=floor(log2(N)))
            return -1;
        else
            return log2(N)+1;
            
    }
