class Solution {
public:
    string reversePrefix(string word, char ch) {
        // int i=0,len=word.length();
        // string str="";
        int index = word.find(ch);
        if(index == string::npos) return word;
        string temp = word.substr(0,index+1);
        string temp2 = word.substr(index+1);
        reverse(temp.begin(),temp.end());
        return temp+temp2;
        // for(auto &x : word){
        //     str+=x;
        //     i++;
        //     if(x==ch){
        //         reverse(str.begin(),str.end());
        //         break;
        //     }
        // }
        // return str + word.substr(i);
    }
};