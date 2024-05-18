class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i=0,j=1,n=nums.size();
        
        // for (int i = 0; i < nums.size();i++) {
        //     if (nums[i] != val) {
        //         nums[j++] = nums[i];
        //     }
        // }
        // return j;
       
        while(j<n){
            if(nums[i]==val and nums[j]!=val){
                swap(nums[i],nums[j]);
                i++; j++;
            }
            else if(nums[i]!=val) i++;
            else if(nums[j]==val) j++;
            else if(nums[i]!=val and nums[j]!=val) i++,j++;
            if(i==j) j++;
        }
        j=0;
        for(i=0;i<n;i++) if(nums[i]!=val) j++;
        return j;
    }
};