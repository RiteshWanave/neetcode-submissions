class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prev = prices[0];
        int ans = 0;
        for (auto i: prices) {
            if (i - prev < 0) {
                prev = i;
            } else {
                ans = max (ans, i - prev);
            }
        }
        return ans;
    }
};
