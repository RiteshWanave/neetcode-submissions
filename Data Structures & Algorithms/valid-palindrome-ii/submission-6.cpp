class Solution {
public:
    bool validPalindrome(string s) {
        int start=0, end=s.size()-1;
        bool del=0;
        while (start<end) {
            if (s[start]!=s[end]) {
                bool f1=true;
                bool f2=true;
                    int sn = start+1;
                    int en = end;
                    while(sn<en) {
                        if(s[sn]!=s[en]) {
                            f1 = false;
                            break;
                        }
                        sn++;
                        en--;
                    }
                    
                    sn = start;
                    en = end-1;
                    while(sn<en) {
                        if(s[sn]!=s[en]) {
                            f2 = false;
                            break;
                        }
                        sn++;
                        en--;
                    }
                
                cout << f1 << " " << f2 << endl;
                if (!f1 && !f2) {
                    return false;
                }
                break;
            }
            start++;
            end--;
        }
        return true;
    }
};