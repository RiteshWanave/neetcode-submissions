class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> ps(nums.size()+1, 0);
        unordered_map<int, int> um;
        um[0]=1;
        int ans = 0;
        for (int i=0; i<nums.size(); i++) {
            ps[i+1] = ps[i]+nums[i];
            if (um[ps[i+1]-k]) {
                ans += um[ps[i+1]-k];
            }
            um[ps[i+1]]++;
        }
        return ans;
    }
};