class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        unordered_map<char, int> map_S;
        unordered_map<char, int> map_T;
        for (char ch : s) {
            map_S[ch]++;
        }
        for (char ch : t) {
            map_T[ch]++;
        }
        for (const auto& pair : map_S) {
            auto it = map_T.find(pair.first);
            if(it == map_T.end() || it->second != pair.second) {
                return false;
            }
        }
        return true;
    }
};
