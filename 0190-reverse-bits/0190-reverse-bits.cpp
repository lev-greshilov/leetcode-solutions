class Solution {
public:
    int reverseBits(int n) {
        int result = 0;

        for (int i = 0; i < 32; i++) {
            int bit = n & 1;    // read

            result <<= 1;       // move
            result |= bit;      // write
            
            n >>= 1;            // next
        }
        return result;
    }
};