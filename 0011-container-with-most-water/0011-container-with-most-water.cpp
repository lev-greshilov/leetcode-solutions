class Solution {
private:
    int getContainerArea(const vector<int>& height, int x1, int x2) {
        return min(height[x1], height[x2]) * (x2 - x1);
    }

public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int res = 0;

        int left = 0;
        int right = n - 1;

        while (left < right) {
            res = max(res, getContainerArea(height, left, right)); 
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return res;
        
    }
};