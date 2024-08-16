class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> numHash;
        for(int i : nums) {
            if (numHash[i] >= 1) return true;
            numHash[i]++;
        } 
        return false;
    }
};
