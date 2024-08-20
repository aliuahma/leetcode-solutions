class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int largest = 0;
        while(left != right) {
            int area = (height[left] < height[right] ? height[left] : height[right]) * (right - left);
            largest = (area > largest) ? area : largest;
            if(height[left] < height[right]) left++;
            else right--;
        }
        return largest;
    }
};
