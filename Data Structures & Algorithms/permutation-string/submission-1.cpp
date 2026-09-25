class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26, 0);
        for (auto i : s1) {
            freq[i - 'a']++;
        }
        int l=0;
        vector<int> tmp=freq;
        for (int r=0; r<s2.size(); r++) {
            if (!freq[s2[r]-'a']) {
                l=r+1;
                tmp = freq;
                continue;
            }
            tmp[s2[r]-'a']--;
            cout << s2[r] << " " << tmp[s2[r]-'a'] << endl;
            if (tmp[s2[r]-'a']<0 ) {
                while (tmp[s2[r]-'a']<0 && l<=r) {
                    cout << l << endl;
                    tmp[s2[l]-'a']++;
                    l++;
                }
            }
            if (r-l+1 == s1.size()) return true;
        }

        return false;
    }
};
