class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string ans="";
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
            if(st.empty()==false && abs(st.top()-s[i])==32){
                st.pop();
                
            }
            else st.push(s[i]);
        }
        
        while(st.empty()==false){
            ans=st.top() + ans;
            st.pop();
        }

        return ans;
        
        
    }
};