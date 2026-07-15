class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy=prices[0];
        for (int i=1; i<prices.size(); i++) {
            if (prices[i]<prices[i-1]) {
                profit += prices[i-1]-buy;
                buy = prices[i];
            } else if (prices[i-1]<prices[i]) {
                if (i == prices.size()-1) {
                    profit += prices[i]-buy;
                }
                continue;
            }
            cout << prices[i] << " " << profit << " " << buy << endl;
        }
        return profit;
    }
};