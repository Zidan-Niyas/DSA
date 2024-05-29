// My approach 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length()) {
            for(int i=0; i<s.length(); i++) {
            int flag = 0;
            for(int j=0; j<t.length(); j++) {
                if(s[i] == t[j]) {
                    t[j] = NULL;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                return false;
            }
        }
        return true;
        }
    }
};
