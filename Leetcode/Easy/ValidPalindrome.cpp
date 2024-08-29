class Solution {
public:
    bool isPalindrome(string s) {
        auto expandFromCenter = [&](int left, int right, string str) {
            while(left >= 0 && right < s.length()) {
                if(str[left] != str[right]) {
                    return false;
                }
                left--;
                right++;
            }
            return true;
        };
        string pruned = "";
        for(auto ch : s) {
            if(isalnum(ch)) {
                pruned += (char) tolower(ch);
            }
        }
        return (pruned.size() % 2 == 0) ? expandFromCenter(pruned.size() / 2 - 1, pruned.size() / 2, pruned) :
                expandFromCenter(pruned.size() / 2, pruned.size() / 2, pruned);
    }
};
