class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
            return false;
        }
        uint counter = 0;
        while (n > 0) {
            uint bit = n & 1;
            if (bit) counter++;
            if (counter > 1) {
                return false;
            }
            n = n >> 1;
        }
        return true;

    }
};