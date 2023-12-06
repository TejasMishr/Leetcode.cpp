class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        if(n<=7) return n*(n+1) / 2;

  int x=n / 7 , temp = 7 * x , rem = n- temp;
//   cout<<"x "<<x<<" "<<temp<<" "<<rem<<endl;

  ans = ans + (28 * x) + (7 * x * (x-1))/2;
//   cout<<"ans "<<ans<<" "<<endl; 
        int remain=x+1;
  for(int i=x + 1; i<rem + x + 1;i++){
    ans += remain;
      remain++;
    // cout<<"chnage "<<ans<<endl;
  } 
        return ans;
    }
};