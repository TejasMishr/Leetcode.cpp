class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        map<int,int> mp;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);
            }
            else if(s[i]==')'){
                if(!st.empty()){
                    st.pop();
                }
                else{
                    mp[i]++;
                }
            }
        }

        while(!st.empty()){
            int ind=st.top();
            mp[ind]++;
            st.pop();
        }

        string res;

        for(int i=0;i<s.length();i++){
            if(mp.find(i)==mp.end()){
                res+=s[i];
            }
        }

        return res;
    }
};