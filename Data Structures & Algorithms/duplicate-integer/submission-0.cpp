class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> mapo;
        for ( int i=0; i<nums.size(); i++) {
            if (mapo[nums[i]]) return true;
            mapo[nums[i]]++;
        }
        return false;
    }
};