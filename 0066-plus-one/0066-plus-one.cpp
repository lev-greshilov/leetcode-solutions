class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) { // No carry
                digits[i]++;
                return digits;
            } else {  // 9 + 1 = 0 and add carry
                digits[i] = 0;
            }
        }

        // Case: every digit is equal 9.
        // Fastest way to solve: change first digit to 1 and add 0 to the tail. 
        digits[0] = 1;
        digits.push_back(0); // amortized O(1) complexity
        
        return digits;
    }
};