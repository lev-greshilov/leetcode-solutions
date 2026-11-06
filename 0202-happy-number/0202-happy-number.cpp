class Solution {
private:
    uint getNextNumber(int n) {
        int result = 0;
        while (n > 0) {
            int digit = n % 10;
            result += digit * digit;
            n /= 10;
        } 
        return result;
    }
 public:
    bool isHappy(int n) {
        if (n == 1) {
            return true;
        }

        int temp = getNextNumber(n);
        unordered_set<int> seen;
        seen.insert(n);

        while (!seen.contains(temp) && temp != 1) {
            seen.insert(temp);
            temp = getNextNumber(temp);
        }
        return temp == 1;
    }
};