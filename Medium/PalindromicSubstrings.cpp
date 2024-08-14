class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;
        auto expandFromCenter = [&](int left, int right) {
            while(left >= 0 && right < s.length() && s[left]==s[right]) {
                left--;
                right++;
                count++;
            }
        };
        for(int i = 0; i < s.size(); i++) {
            expandFromCenter(i, i);
            expandFromCenter(i, i+1);
        }
        return count;
    }
};
