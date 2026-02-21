class Solution {
public:
    bool isPalindrome(string s) {
        string s2 = "";
        for (char c : s){
            if (isalnum(c)){
                s2 += tolower(c);
            }
        }
        return s2 == string(s2.rbegin(), s2.rend());
    }
};