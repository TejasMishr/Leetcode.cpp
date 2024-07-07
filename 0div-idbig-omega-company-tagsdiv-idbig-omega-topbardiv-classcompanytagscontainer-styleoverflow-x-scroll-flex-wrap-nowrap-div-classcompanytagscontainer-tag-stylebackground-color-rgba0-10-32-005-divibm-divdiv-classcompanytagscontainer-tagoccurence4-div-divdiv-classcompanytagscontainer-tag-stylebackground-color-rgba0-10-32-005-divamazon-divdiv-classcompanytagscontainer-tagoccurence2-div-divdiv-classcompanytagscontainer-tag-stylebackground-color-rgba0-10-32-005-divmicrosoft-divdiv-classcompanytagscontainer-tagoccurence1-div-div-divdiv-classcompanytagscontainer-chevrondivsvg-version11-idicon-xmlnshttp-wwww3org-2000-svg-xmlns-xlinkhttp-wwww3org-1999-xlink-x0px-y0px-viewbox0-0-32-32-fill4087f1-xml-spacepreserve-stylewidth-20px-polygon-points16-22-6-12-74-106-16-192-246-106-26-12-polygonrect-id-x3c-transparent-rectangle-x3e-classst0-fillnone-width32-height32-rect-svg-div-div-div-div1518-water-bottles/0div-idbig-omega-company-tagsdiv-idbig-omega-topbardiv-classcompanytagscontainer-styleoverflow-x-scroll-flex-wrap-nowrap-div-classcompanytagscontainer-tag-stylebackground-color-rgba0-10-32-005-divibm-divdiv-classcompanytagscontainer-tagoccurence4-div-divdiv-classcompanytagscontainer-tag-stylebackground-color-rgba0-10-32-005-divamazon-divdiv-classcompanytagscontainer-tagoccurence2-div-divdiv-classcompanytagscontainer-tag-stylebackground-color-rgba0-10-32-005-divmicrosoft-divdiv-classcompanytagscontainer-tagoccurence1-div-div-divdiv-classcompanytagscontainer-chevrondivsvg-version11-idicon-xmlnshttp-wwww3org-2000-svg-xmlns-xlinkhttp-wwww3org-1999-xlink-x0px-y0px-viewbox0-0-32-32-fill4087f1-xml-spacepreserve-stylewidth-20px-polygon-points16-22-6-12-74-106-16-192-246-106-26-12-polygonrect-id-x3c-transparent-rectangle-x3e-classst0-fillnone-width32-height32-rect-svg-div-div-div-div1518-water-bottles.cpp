class Solution {
public:
    int numWaterBottles(int bottle, int ex) {
        
//         while(numBottles > numExchange){
//             ans+= numExchange;
//             numBottles-=numExchange;
//             numBottles++;
            
//         }
        int total = bottle; 
        while (bottle >= ex) {
            
           int newBottles = bottle / ex; 
           total += newBottles;           
           bottle = newBottles + (bottle % ex); 
        }
        return total;
        
        
    }
};