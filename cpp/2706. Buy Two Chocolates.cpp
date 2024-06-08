class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int res = money - (prices[0] + prices[1]);
        if (res >= 0) return res;
        else return money;
    }
};