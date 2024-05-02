class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi = -1;
        for(int i=0; i< nums.size(); i++){
            if(nums[i] > 0 && find(nums.begin(),nums.end(), -nums[i]) != nums.end()){
                maxi = max(maxi,nums[i]);
            }
        }
        return maxi;
    }
};