class Solution {
public:
    int mySqrt(int x) {
        long unsigned int target = x;
        long unsigned int left = 0;
        long unsigned int right = x;
        while (left <= right) {
            long unsigned int mid = left + (right - left) / 2;
            long unsigned int sqared_mid = mid * mid;
            if (sqared_mid == target) {
                return mid;
            } else if (sqared_mid < target ) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left - 1;
        
    }
};