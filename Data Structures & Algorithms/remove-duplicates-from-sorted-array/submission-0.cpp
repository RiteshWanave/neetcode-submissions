class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 1;
        vector<int> fnums;
        fnums.push_back(nums[0]);
        for (int i=1; i<nums.size(); i++) {
            if (nums[i]!=nums[i-1]) {
                fnums.push_back(nums[i]);
                ans++;
            }
        }
        nums = fnums;
        return ans;
    }
};