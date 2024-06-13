class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& std) {
        sort(seats.begin(),seats.end());
        sort(std.begin(),std.end());
        int mov=0;
        for(int i=0;i<seats.size();i++) mov+=abs(seats[i]-std[i]);
        return mov;
    }
   
};