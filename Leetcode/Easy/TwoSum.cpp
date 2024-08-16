class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for(int i = 0; i < nums.size(); i++) {
            numMap[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            if(numMap.count(target - nums[i]) && numMap[target - nums[i]] != i) return {i, numMap[target-nums[i]]};
        }
        return {};
        
    }
};
