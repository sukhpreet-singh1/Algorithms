 int countBitsFlip(int a, int b){
        
        // Your logic here
        int x=a^b;
        return __builtin_popcount(x);
        
    }
  //we just have to xor and calculate the no. of set bits   
