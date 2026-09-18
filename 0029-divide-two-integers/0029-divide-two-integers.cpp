class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool negative = (dividend < 0) ^ (divisor < 0);

        if (dividend > 0)
            dividend = -dividend;

        if (divisor > 0)
            divisor = -divisor;

        int quotient = 0;

        while (dividend <= divisor) {
            int chunk = divisor;
            int multiple = -1;

            while (chunk >= INT_MIN - chunk &&
                   chunk + chunk >= dividend) {
                chunk += chunk;
                multiple += multiple;
            }

            dividend -= chunk;
            quotient += multiple;
        }

        return negative ? quotient : -quotient;
    }
};