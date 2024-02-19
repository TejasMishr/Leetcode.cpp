class Solution {
public:
    bool isPowerOfTwo(int n) {
        //Method 1
        //  if(n<=0) return false;
        // return ((n&(n-1))==0);
        
        //method 2:
        if(n==0) return false;
        return floor(log2(n)) == ceil(log2(n)) ? true : false;
    }
};