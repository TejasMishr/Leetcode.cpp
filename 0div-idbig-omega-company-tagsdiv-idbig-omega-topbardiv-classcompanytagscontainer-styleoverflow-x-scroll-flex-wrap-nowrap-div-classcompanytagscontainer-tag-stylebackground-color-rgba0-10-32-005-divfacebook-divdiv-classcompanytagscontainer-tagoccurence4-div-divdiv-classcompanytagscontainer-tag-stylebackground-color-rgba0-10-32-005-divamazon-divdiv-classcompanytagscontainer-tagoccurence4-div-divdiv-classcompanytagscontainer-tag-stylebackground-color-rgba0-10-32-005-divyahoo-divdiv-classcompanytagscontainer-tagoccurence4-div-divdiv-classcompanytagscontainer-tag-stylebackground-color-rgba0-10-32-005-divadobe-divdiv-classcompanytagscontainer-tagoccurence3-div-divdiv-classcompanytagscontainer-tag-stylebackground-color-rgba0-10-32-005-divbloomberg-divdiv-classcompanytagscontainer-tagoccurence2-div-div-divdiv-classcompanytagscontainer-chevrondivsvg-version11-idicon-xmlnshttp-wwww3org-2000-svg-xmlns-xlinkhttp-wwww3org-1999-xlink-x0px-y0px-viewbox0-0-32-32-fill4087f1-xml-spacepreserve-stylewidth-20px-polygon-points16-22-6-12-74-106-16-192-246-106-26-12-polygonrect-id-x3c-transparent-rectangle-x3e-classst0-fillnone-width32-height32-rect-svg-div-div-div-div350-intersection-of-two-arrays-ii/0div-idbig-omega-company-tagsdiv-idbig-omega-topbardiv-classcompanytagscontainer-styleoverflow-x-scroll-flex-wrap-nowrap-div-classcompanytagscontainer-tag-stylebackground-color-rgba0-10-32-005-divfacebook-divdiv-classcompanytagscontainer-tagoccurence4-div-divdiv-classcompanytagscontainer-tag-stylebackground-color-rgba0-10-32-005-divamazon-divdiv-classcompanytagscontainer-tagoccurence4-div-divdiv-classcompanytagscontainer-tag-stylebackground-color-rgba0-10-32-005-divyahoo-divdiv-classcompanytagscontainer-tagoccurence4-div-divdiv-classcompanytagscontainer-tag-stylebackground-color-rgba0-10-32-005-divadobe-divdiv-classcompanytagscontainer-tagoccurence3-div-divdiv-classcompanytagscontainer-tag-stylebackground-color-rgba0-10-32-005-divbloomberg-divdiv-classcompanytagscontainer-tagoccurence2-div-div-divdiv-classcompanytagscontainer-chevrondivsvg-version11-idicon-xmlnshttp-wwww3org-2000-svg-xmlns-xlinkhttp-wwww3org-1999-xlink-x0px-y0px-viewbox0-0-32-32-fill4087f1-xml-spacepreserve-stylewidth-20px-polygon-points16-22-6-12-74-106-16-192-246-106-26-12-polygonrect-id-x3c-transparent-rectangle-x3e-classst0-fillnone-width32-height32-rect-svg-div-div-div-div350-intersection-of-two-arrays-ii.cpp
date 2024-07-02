class Solution {
public:
    vector<int> intersect(vector<int>& nums, vector<int>& nums2) {
        
        
        // APPROCH 1
        
        // Defining Hashmap
        unordered_map<int,int> count;
        // -> COUNT Total Occurances ( using Hashmap)
        
        for(auto x:nums) count[x]++;
        
        // Finding the Intersection and checking count in Hashmap
        vector<int> res;
        for(int x: nums2) if(count[x] > 0) res.push_back(x),count[x]--;
        
        
        // return result
        return res;
        
        
            
            
    }
};