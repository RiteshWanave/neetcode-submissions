class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        priority_queue<int> pq;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            cnt[nums[i]]++;
            pq.push(nums[i]);

            // Remove element leaving the window
            if (i >= k) {
                cnt[nums[i - k]]--;
            }

            // Once we have a complete window
            if (i >= k - 1) {
                while (cnt[pq.top()] == 0) {
                    pq.pop();
                }

                ans.push_back(pq.top());
            }
        }

        return ans;
    }
};