class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int counter = 0;
        for (int num : nums) {
            while (num > 0) {
                if (num % 10 == digit) counter++;
                num /= 10;
            }
        }
        return counter;
    }
};