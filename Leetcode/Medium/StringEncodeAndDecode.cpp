class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string str : strs) {
            result += str + "\n";
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string wordSoFar = "";
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '\n') {
                result.push_back(wordSoFar);
                wordSoFar = "";
            } else {
                wordSoFar += s[i];
            }
        }
        return result;
    }
};
