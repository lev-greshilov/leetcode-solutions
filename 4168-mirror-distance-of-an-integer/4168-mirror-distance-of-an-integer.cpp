class Solution {
public:
    int mirrorDistance(int n) {
        int x = n;
        int result = 0;

        while (x > 0) {
            int digit = x % 10;
            result = result * 10 + digit;
            x /= 10;
        }
        int reversed_n = result;

        return abs(n - reversed_n);
    }
};
