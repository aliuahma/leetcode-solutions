class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int prefix = 1;
        for(int i = 0; i < (int) nums.size() - 1; i++) {
            result[i+1] *= prefix * nums[i];
            prefix = result[i+1];
        }
        int suffix = 1;
        for(int i = nums.size() - 1; i >= 1; i--) {
            result[i-1] *= suffix * nums[i];
            suffix *= nums[i];
        }
        return result;
    }
};
