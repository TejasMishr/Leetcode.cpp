class Solution {
public:
    int heightChecker(vector<int>& heights) {
        
//         vector<int> vec(heights);
//         sort(vec.begin(),vec.end());
        
        
//         int tot=0;
//         for(int i=0;i<vec.size();i++){
//             if(vec[i]!=heights[i]) tot++;
            
//         }
        
//         return tot;


        int mp[101]={0};
        for(auto h: heights) mp[h]++;
        
        
        int tot=0,h_ptr=1;
        
        for(auto h : heights){
            while(mp[h_ptr]==0) h_ptr++;
            
            if( h_ptr !=h ) tot++;
            
            mp[h_ptr]--;
            
        }
        return tot;
    }
};