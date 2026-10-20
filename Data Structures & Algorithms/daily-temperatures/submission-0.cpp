class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> st;
        vector<int> ans(temperatures.size(), 0);

        for (int i = 0; i < temperatures.size(); i++) {
            int curr = temperatures[i];
            while (!st.empty() && curr > st.top().first) {
                ans[st.top().second] = i - st.top().second;
                st.pop();
            }
            st.push({curr, i});
        }
        return ans;
    }
};
