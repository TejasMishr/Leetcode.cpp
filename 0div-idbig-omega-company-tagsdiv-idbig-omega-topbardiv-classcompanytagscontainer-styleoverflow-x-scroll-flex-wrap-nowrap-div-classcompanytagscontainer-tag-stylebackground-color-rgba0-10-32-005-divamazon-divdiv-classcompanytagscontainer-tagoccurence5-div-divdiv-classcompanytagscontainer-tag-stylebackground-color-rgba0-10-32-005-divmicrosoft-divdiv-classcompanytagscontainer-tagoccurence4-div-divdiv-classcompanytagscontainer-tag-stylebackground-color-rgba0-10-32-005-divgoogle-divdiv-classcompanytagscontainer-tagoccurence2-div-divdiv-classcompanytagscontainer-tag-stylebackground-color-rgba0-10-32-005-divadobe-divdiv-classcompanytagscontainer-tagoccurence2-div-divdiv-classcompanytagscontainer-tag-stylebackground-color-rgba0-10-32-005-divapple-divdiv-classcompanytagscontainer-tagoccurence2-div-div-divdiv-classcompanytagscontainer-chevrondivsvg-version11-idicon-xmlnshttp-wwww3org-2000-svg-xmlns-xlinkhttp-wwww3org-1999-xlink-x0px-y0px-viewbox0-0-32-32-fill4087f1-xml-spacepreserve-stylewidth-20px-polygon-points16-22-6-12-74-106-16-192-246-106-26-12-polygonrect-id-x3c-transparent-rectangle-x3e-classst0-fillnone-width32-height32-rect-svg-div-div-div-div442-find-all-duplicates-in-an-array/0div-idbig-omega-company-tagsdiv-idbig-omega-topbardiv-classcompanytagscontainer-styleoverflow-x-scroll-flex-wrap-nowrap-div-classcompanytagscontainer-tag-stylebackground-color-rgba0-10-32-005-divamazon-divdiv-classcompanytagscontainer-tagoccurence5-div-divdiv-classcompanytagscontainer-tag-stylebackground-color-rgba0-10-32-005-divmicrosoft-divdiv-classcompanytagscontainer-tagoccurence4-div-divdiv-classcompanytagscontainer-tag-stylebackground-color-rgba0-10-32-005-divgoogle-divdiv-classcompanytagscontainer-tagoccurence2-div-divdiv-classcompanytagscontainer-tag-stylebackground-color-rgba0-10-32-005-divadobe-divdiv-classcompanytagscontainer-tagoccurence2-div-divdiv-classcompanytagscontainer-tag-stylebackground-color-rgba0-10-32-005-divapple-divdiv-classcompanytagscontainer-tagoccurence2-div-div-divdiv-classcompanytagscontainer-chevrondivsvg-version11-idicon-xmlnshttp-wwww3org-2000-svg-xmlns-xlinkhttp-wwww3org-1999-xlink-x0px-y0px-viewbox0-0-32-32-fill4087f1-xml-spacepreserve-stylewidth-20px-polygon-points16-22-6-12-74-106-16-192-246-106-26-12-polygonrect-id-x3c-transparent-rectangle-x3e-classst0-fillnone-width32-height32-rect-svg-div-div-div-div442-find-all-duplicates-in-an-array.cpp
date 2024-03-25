class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int checkToIndex=abs(nums[i])-1;
            if(nums[checkToIndex]>0)nums[checkToIndex]=-nums[checkToIndex];
            else ans.push_back(checkToIndex+1);
        }
        return ans;
    }
};