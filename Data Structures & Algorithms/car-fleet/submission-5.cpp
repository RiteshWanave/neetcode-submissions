class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> order;
        int ans = 1;
        for (int i = 0; i < speed.size(); i++) {
            order.push_back({position[i], speed[i]});
        }
        sort(order.begin(), order.end());
        vector<double> time;
        for (auto itr : order) {
            time.push_back(float(target - itr.first) / itr.second);
        }
        double right_max = time[time.size()-1];
        for (int i = time.size()-1; i >= 0; i--) {
            cout << time [i] << " ";
            if (right_max < time[i]) {
                ans++;
            }
            right_max = max(right_max, time[i]);
        }
        return ans;
    }
};
