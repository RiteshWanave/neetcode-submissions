class Solution {
public:

    vector<string> split(const string &str, const string &delim) {
        vector<string> tokens;
        size_t start = 0;
        size_t end;

        while ((end = str.find(delim, start)) != string::npos) {
            tokens.push_back(str.substr(start, end - start));
            start = end + delim.length();
        }

        tokens.push_back(str.substr(start));
        return tokens;
    }

    string encode(vector<string>& strs) {
        string en = "";
        for (int i=0; i<strs.size(); i++) {
            if (i) {
                en = en+"_rad1on_"+strs[i];
            } else en = strs[i];
        }
        if (!strs.size()) {
            en = "_pro7on_";
        }
        cout << en;
        return en;
    }

    vector<string> decode(string s) {
        vector<string> parts;
        if (s == "_pro7on_") return parts; 
        parts = split(s, "_rad1on_");
        return parts;
    }
};
