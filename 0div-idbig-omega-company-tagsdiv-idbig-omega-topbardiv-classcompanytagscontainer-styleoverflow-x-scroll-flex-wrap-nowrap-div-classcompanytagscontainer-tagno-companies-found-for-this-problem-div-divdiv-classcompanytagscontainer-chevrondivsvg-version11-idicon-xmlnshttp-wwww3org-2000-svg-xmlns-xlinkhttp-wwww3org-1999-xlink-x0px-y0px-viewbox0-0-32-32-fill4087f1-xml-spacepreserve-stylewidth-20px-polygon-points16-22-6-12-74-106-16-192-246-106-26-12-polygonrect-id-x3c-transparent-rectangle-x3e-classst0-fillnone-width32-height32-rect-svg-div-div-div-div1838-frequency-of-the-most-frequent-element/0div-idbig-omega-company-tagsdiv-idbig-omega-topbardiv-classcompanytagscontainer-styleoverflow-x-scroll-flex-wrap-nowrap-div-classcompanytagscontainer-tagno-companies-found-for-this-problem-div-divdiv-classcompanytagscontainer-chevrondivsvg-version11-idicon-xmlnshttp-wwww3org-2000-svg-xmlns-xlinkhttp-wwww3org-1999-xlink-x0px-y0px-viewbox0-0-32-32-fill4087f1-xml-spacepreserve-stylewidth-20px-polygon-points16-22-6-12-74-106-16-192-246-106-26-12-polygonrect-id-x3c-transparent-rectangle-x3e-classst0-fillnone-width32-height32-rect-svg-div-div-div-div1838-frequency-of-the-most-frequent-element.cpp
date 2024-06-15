class Solution {
public:
    int maxFrequency(vector<int>& nums, int k){
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long total = 0;
        int left = 0, result = 0;
        
        for (int right = 0; right < n; ++right) {
            total += nums[right];
            while (1LL * nums[right] * (right - left + 1) > total + k) {
                total -= nums[left];
                left++;
            }
            result = max(result, right - left + 1);
        }
        
        return result;
    }
        
    
};