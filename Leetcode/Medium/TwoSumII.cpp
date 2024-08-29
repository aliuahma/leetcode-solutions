class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> result;
        while(result.size() == 0) {
            if(target - numbers[left] > numbers[right]) left++;
            if(target - numbers[right] < numbers[left]) right--;
            if(target == numbers[right] + numbers[left]) result = {left+1, right+1};
        }
        return result;
    }
};
