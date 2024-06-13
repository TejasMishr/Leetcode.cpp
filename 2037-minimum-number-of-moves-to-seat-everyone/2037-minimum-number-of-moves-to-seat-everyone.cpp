class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& std) {
        
        //n logn
        // sort(seats.begin(),seats.end());
        // sort(std.begin(),std.end());
        // int mov=0;
        // for(int i=0;i<seats.size();i++) mov+=abs(seats[i]-std[i]);
        // return mov;
        
        
        int maxi1= *max_element(seats.begin(),seats.end());
        int maxi2= *max_element(std.begin(),std.end());
        int maxi= max(maxi1,maxi2);
        
        vector<int> diff(maxi+1,0);
        for(int i=0; i<seats.size();i++) diff[seats[i]]++;
        for(int j=0; j<std.size();j++) diff[std[j]]--;
        
        int mov=0, unmatched=0;
        
        for(auto x: diff) mov+=abs(unmatched), unmatched+=x;
        
        return mov;
        
    }
   
};