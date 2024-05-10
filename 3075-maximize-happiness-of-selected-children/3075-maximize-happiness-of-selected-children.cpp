class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end(),greater<int>());
        long long tot=0;
        int turns=0;
        for(int i = 0; i < k; i++) {
            tot+=max(arr[i]-turns,0);
            turns++;
        }
        return tot;
        
        
    }
};