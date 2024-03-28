class Solution {
public:
   int maxSubarrayLength(vector<int>& nums, int k) {
        int i = 0, result = 0;
        unordered_map<int, int> counts;
        for(int j = 0; j < nums.size(); ++j) {
            ++counts[nums[j]];
            while(i < j && counts[nums[j]] > k) --counts[nums[i++]];
            result = max(result, j - i + 1);
        }
        return result;
   }
};