class Solution {
public:
    int mySqrt(int x) {
        
        if(x < 2) return x;
        
        
        int left= 2, right = x/2, mid;
        long long num;
        
        
        while(left <= right){
            mid =left + (right - left)/2;
            
            num = 1LL * mid * mid;
            
            if( num > x ) right = mid - 1;
            else if(num < x) left = mid + 1;
            else {
                return mid;
            }
            
        }
        return right;
        
        
    }
};