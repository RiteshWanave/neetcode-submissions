class Solution {
public:
    bool isValid(string s) {
       stack<int> st;
       for (int i=0; i<s.size(); i++) {
            char c=s[i];
            if (c=='(' || c=='[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;
                if (c==')' && st.top() != '(') return false;
                else if (c=='}' && st.top() != '{') return false;
                else if (c==']' && st.top() != '[') return false;

                st.pop();
            }
       }
       if (!st.empty()) return false;
       return true;
    }
};
