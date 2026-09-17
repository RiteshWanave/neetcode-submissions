class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> m;
        int ans = 0, curr = 0, start = 1;
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]] && m[s[i]]>=start) {
                ans = max(ans, curr);
                start = m[s[i]]+1;
                curr = i-start+1+1;
                m[s[i]]=i+1;
            } else {
                m[s[i]]=i+1;
                curr++;
            }
        }
        ans = max(ans, curr);
        return ans;
    }
};
