class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<int> common(26,0),current(26,0);
        vector<string> res;
        for(auto x : words[0]) common[x - 'a']++;
        
        for(int i=1; i<n ; i++){
            fill(current.begin(),current.end(),0);
            for(auto x: words[i]) current[x - 'a']++;
            
            for (int j = 0; j < 26; j++) {
                common[j] = min(common[j],current[j]);
            }
        }
        
        for(int j=0;j<26;j++){
            for(int k=0;  k < common[j]; k++) res.push_back(string(1,j+'a'));
        }
        
        return res;
    }
    
};