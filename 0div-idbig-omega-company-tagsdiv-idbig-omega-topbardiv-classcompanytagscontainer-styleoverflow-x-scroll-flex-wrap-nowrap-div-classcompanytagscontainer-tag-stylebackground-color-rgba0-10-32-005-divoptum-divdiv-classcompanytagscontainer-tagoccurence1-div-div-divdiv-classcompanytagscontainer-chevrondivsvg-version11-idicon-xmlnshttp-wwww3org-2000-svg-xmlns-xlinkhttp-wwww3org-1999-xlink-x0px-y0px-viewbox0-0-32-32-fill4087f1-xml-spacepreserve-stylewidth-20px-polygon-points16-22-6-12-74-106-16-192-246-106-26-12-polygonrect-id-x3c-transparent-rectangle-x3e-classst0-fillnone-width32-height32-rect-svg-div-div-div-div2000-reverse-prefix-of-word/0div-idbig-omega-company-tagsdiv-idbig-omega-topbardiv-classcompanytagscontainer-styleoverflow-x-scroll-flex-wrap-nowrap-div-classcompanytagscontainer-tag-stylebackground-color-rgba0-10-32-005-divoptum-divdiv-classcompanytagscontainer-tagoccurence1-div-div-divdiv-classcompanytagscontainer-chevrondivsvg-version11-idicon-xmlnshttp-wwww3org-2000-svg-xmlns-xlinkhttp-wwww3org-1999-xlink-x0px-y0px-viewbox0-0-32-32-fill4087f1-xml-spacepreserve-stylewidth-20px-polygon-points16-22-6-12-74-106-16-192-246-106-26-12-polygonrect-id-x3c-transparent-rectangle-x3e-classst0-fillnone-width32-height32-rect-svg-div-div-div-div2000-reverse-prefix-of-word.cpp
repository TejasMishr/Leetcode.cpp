class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0,len=word.length();
        string str="";
        
        for(auto &x : word){
            str+=x;
            i++;
            if(x==ch){
                reverse(str.begin(),str.end());
                break;
            }
        }
        return str + word.substr(i);
    }
};