class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // for (auto x : nums ) cout<<x<<endl;
        // if (nums[1]!=0) return 0;
        // if (nums[n-1]!=n) return n;
        int i=0;
        for(i;i<n;i++){
            if(nums[i]!=i) return i;
        }
        return i;
    }
    
};