class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sa(26);
        if (s.size() != t.size()) return false;
        for (char c: s) {
            sa[c-'a']++;
        }
        for (char c: t) {
            sa[c-'a']--;
        }
        for (int num: sa) {
            if (num) return false;
        }
        return true;
    }
};
