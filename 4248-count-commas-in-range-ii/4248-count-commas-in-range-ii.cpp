class Solution {
public:
    long long countCommas(long long n) {
        long long result = 0; 
        long long divisor = 1000;

        while (n >= divisor) {
            
            result += (n - divisor + 1);
            
            // Check the overflow 
            if (divisor > n / 1000)
                break;
            divisor *= 1000;
        }
        return result;
    }
};