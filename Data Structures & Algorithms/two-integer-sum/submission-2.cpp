class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapo;
        for (int i=0; i<nums.size(); i++) {
            int rem = mapo[target-nums[i]];
            if ( rem && rem-1!=i) {
                return {rem-1, i};
            }
            mapo[nums[i]]=i+1;
        }
        return{};
    }
};
