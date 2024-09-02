class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        unordered_map<int, bool> map;
        for(int n : nums) {
            map[n] = true;
        }
        for(int n : nums) {
            if(map.find(n-1) != map.end()) {
                map[n] = false;
            }
        }
        int longest = 1;
        for(int n : nums) {
            if(map[n]) {
                int j = n;
                int count = 1;
                while(map.find(++j) != map.end()) {
                    if (!map[j]) count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};
