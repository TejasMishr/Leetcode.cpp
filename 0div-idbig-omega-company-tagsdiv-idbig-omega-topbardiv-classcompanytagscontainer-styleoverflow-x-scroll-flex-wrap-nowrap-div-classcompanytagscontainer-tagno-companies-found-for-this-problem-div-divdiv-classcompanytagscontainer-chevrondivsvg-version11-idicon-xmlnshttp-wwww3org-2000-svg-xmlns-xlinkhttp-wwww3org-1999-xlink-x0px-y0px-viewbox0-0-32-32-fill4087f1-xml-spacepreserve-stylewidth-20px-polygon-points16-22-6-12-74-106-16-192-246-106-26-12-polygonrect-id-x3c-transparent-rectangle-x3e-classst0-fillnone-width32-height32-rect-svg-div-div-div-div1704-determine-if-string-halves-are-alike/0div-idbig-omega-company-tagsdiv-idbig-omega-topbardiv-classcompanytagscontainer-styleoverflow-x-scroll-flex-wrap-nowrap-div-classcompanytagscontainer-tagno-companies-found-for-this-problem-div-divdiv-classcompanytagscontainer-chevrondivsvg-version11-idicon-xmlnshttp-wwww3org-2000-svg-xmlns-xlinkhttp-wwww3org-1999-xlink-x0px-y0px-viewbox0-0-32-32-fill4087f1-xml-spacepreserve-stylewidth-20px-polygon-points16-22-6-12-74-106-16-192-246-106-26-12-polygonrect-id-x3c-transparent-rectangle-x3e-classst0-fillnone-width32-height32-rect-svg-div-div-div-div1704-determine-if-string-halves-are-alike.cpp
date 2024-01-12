class Solution {
public:
    bool halvesAreAlike(string s) {
        int chk1=0,chk2=0;
        for(int i=0;i<s.length()/2;i++){
            // cout<<s[i]<<" ";
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U') chk1++;
        }
        // cout<<endl;
        for(int i=s.length()/2;i<=s.length()-1;i++){
            cout<<s[i]<<" ";
            if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o' || s[i]=='O' || s[i]=='u' || s[i]=='U') chk2++;
        }
        // cout<<endl;
        // cout<<chk1<<" "<<chk2<<endl;
        
        return (chk1==chk2);
    }
};