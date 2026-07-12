class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int zc = 0;
        for (auto num: nums) {
            if (num == 0) zc++;
            else prod *= num;
        }
        if (zc >= 2) {
            prod = 0;
        }
        vector<int> ans;
        for (auto num: nums) {
            int nprod = 0;
            if (num != 0 && zc == 0 ) {
                nprod = prod/num;
            } else if (num == 0) nprod = prod;
            ans.push_back(nprod);
        }
        return ans;
    }
};
