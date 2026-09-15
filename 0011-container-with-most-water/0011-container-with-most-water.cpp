class Solution {
private:
    int getContainerArea(const vector<int>& height, int x1, int x2) {
        return min(height[x1], height[x2]) * (x2 - x1);
    }

public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int res = INT_MIN;

        int containerWidth = n - 1;
        int containerHeight = 0;
        
        int left = 0;
        int right = n - 1;

        while (left < right) {
            containerHeight = min(height[left], height[right]);
            res = max(res, containerWidth * containerHeight);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
            containerWidth--;
        }
        return res;
        
    }
};
