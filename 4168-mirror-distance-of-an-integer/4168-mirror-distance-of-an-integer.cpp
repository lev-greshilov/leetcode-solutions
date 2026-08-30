class Solution {
public:
    int mirrorDistance(int n) {
        auto reverse = [](int n) {
            int result = 0;

            while (n > 0) {
                int digit = n % 10;
                result = result * 10 + digit;
                n /= 10;
            }

            return result;
        };

        return abs(n - reverse(n));
    }
};
