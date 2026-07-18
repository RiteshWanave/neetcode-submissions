class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 ) return 0;
        map<int, int> ma;
        for (auto num: nums) {
            ma[num] = 1;
        }
        int ans = 1; 
        for (auto num: nums) {
            int curr = 0;
            while (ma[num--]) {
                curr++;
            }
            ans = max(curr, ans);
        }
        return ans;
    }
};
