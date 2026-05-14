class Solution {
   public:
    bool isPalindrome(string s) {
        string sf;
        for (char c : s) {
            if (isalnum(c)) {
                sf += tolower(c);
            }
        }
        int i = 0;
        while (i < sf.size() / 2) {
            if (sf[i] != sf[sf.size() - i - 1]) return false;
            i++;
        }
        return true;
    }
};
