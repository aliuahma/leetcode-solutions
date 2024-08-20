class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> anagrams;
        if(strs.size() == 1) {
            result.push_back(strs);
        } else {
            for(string str : strs) {
                string sorted = str;
                sort(sorted.begin(), sorted.end());
                anagrams[sorted].push_back(str);
            }
            for(auto vec : anagrams) {
                result.push_back(vec.second);
            }
        }
        return result;
    }
};
