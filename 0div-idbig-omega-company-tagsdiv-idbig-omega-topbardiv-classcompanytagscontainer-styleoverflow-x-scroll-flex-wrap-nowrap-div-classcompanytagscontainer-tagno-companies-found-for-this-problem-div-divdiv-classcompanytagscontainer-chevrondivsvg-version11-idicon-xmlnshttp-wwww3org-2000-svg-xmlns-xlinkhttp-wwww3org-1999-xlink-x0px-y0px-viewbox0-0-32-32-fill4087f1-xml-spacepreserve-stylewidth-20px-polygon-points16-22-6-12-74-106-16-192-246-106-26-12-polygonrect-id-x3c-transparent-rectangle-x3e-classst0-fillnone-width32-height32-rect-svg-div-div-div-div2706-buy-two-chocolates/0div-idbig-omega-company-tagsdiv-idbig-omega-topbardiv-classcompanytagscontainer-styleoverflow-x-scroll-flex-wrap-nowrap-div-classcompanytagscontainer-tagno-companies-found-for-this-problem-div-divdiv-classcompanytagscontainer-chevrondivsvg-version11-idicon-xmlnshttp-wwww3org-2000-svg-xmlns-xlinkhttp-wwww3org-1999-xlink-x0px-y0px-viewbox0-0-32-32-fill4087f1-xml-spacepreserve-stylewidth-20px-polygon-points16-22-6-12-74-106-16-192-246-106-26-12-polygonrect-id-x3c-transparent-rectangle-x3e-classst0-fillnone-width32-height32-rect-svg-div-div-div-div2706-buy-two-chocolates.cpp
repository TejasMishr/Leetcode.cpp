class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int mini = prices[0] + prices[1];

        if (mini <= money) {
            return money - mini;
        }
        return money;
    }
};