class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n==1) return n;
        if(n==2) return 1;
        int f=0,s=1,t=1;
        int r;
        for(int i=3;i<=n;i++){
            r = f+s+t;
            f=s;
            s=t;
            t=r;

        }
        return r;
    }
};