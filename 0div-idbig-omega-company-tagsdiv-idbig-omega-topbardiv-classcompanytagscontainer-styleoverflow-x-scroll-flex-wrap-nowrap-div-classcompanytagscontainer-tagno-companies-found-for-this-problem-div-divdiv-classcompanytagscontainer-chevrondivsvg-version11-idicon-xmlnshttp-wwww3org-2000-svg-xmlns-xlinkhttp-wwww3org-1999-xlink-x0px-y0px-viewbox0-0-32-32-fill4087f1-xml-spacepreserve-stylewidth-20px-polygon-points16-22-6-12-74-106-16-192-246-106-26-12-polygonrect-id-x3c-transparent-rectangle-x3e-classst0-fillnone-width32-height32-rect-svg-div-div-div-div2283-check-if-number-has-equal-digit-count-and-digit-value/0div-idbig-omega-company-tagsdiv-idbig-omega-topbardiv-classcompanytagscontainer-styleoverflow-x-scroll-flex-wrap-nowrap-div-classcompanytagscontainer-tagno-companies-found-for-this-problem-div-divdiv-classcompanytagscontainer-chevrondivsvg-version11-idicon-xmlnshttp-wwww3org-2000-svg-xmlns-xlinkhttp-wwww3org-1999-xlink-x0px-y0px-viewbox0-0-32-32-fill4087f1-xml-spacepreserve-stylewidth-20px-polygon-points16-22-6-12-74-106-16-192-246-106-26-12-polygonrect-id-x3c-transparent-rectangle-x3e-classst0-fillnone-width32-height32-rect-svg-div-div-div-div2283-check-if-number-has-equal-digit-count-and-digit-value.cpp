class Solution {
public:
    bool digitCount(string &num) {
    return unordered_set<string>{"1210", "2020" , "21200", "3211000", "42101000", "521001000", "6210001000"}.count(num);
}
    
};