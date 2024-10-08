/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long low = 1, high = n;
        
        while (low <= high) {
            long long pick = (low + high) / 2;
            int result = guess(pick);
            
            if (result == 0) return pick;
            else if (result < 0) high = pick - 1;
            else low = pick + 1;
        }
        return -1;
    }
};