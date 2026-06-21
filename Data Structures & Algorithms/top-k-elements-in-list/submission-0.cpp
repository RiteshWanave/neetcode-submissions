class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq(nums.size()+1);
        unordered_map<int, int> ma;
        for (auto num: nums) {
            ma[num]++;
        }
        for (auto m: ma) {
            freq[m.second].push_back(m.first);
        }
        vector<int> res;
        for (int i=freq.size()-1; i>=1; i--) {
            for (int n : freq[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
