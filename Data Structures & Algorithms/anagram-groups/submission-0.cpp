class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> mapping;
        for (string str : strs) {
            vector<int> data(26, 0);
            for (char c : str) {
                int ind = c - 'a';
                data[ind]++;
            }
            mapping[data].push_back(str);
        }
        vector<vector<string>> ans;
        for (auto &entry : mapping) {
            ans.push_back(entry.second);
        }
        return ans;
    }
};