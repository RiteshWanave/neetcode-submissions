class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = nums.size();
        vector<int> ansarr;
        for (int num: nums) {
            if (num == val) ans--;
            else ansarr.push_back(num);
        }
        for (int i=0; i<nums.size()-ans; i++) {
            ansarr.push_back(0);
        }
        nums = ansarr;
        return ans;
    }
};