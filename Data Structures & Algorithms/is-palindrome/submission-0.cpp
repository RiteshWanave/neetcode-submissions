#include <cctype>

class Solution {
public:
    bool isAlphaNum(char c) {
        return (c >= 'A' && c <= 'Z') ||
               (c >= 'a' && c <= 'z') ||
               (c >= '0' && c <= '9');
    }

    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;

        while (start < end) {
            if (!isAlphaNum(s[start])) {
                start++;
                continue;
            }

            if (!isAlphaNum(s[end])) {
                end--;
                continue;
            }

            if (tolower(s[start]) != tolower(s[end]))
                return false;

            start++;
            end--;
        }

        return true;
    }
};