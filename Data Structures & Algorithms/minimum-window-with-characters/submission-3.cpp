class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> ma;
        unordered_map<char, int> window;
        for (auto itr: t) {
            ma[itr]++;
        }
        int l=0, n = ma.size();
        int curr = 0;
        int asize = INT_MAX;
        pair<int, int> ans;
        for (int r=0; r<s.size(); r++) {
            window[s[r]]++;
            if (ma[s[r]] && ma[s[r]] == window[s[r]]) {
                curr++;
            }
            while (curr == n) {
                if ((r-l+1) < asize) {
                    asize = r-l+1;
                    ans = {l,r};
                }
                window[s[l]]--;
                if(ma[s[l]] && window[s[l]] < ma[s[l]]) {
                    curr--;
                }
                l++;
            }
        }
        return asize == INT_MAX ? "" : s.substr(ans.first, asize);
    }
};
