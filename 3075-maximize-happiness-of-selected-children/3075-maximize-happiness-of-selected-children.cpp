class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        // sort(arr.begin(),arr.end(),greater<int>());
        long long tot=0;
        int turns=0;
        // for(int i = 0; i < k; i++) {
        //     tot+=max(arr[i]-turns,0);
        //     turns++;
        // }
        // return tot;
        
        priority_queue<int> pq;
        for(auto x:arr) pq.push(x);
        for(int i = 0; i < k; i++) {
            tot+=max(pq.top()-turns,0);
            pq.pop();
            turns++;
        }
        return tot;
        
        
        
    }
};