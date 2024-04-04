class Solution {
public:
    int maxDepth(string s) {
       stack<char>st;
        int res=0,count=0;
        for(auto ch:s){
            if(ch=='('){
                st.push('(');
                count=st.size();
            }
            else if(ch==')'){
                st.pop();
                res=max(res,count);
            }
        }
        return res;
    }
};