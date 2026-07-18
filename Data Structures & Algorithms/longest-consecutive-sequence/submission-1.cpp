class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 ) return 0;
        map<int, int> ma;
        for (auto num: nums) {
            ma[num] = 1;
        }
        for (auto it: ma) {
            cout << it.first << ":" << it.second << endl;
        }
        int anum = nums[0];
        int ans = 1; 
        for (auto num: nums) {
            int curr = 0;
            int numt=num;
            // if (num <= anum && abs(anum-num)<ans) continue;
            while (ma[numt--]) {
                curr++;
            }
            anum = num;
            ans = max(curr, ans);
        }
        cout << ans << " " << anum << endl;
        return ans;
    }
};
