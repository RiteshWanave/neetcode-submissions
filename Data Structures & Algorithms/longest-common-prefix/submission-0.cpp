class TrieNode {
public:
    TrieNode* children[26];
    int level = 0;

    TrieNode() {
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class Trie {
private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }

    void insert(string word) {
        TrieNode* node = root;

        for (char c: word) {
            int ind = c-'a';
            if (node->children[ind]==nullptr) {
                node->children[ind] = new TrieNode();
            }
            node = node->children[ind];
        }
    }

    int checkPref(string word) {
        TrieNode* node = root;
        int count = 0;

        for (char c: word) {
            int ind = c-'a';
            cout << count << endl;
            if (node->children[ind]!=nullptr) {
                count++;
                node = node->children[ind];
            } else return count;
        }
        return count;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        Trie triee;
        triee.insert(strs[0]);
        int count = strs[0].size();
        for (string str: strs) {
            count = min(count, triee.checkPref(str));
        }
        return strs[0].substr(0, count);
    }
};
