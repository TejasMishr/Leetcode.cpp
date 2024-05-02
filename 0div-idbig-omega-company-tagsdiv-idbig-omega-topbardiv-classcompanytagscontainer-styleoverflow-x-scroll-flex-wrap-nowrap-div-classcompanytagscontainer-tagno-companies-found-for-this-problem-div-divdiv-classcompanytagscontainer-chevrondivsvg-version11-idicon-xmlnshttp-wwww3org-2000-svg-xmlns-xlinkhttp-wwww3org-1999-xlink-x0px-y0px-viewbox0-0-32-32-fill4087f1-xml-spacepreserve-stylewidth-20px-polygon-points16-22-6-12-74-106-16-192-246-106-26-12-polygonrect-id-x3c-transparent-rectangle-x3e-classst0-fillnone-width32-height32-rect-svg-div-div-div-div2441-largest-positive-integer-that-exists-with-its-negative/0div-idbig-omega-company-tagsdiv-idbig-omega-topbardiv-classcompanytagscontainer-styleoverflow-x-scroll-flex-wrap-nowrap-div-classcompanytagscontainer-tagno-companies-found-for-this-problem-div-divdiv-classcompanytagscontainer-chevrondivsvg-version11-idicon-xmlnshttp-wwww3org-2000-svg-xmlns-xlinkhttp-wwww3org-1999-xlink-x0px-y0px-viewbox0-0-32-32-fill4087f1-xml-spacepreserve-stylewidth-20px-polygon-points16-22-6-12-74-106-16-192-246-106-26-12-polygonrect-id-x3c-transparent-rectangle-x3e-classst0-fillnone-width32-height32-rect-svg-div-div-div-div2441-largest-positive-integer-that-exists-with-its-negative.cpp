class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // int maxi = -1;
        // for(int i=0; i< nums.size(); i++){
        //     if(nums[i] > 0 && find(nums.begin(),nums.end(), -nums[i]) != nums.end()){
        //         maxi = max(maxi,nums[i]);
        //     }
        // }
        // return maxi;

        
        // TC O(n⋅logn)  SC O(logn)
//         sort(nums.begin(),nums.end());
//         int low=0,high=nums.size()-1;
//         while(low<high){
//             if(nums[high] == -nums[low]) return nums[high];
            
//             else if( -nums[low] > nums[high]) low++;
            
//             else high--;
//         }
//         return -1;
        
        
        // SC & TC : O(n)
        unordered_set<int> s;
        
        for(auto x: nums) if(x<0) s.insert(x);
        
        int ans=-1;
        
        for(auto y: nums) if(y>ans && s.contains(-y)) ans=y;
        
        return ans;
        
    }
};