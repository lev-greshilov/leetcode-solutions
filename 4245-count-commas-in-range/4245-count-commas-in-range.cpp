class Solution {
public:
    int countCommas(int n) {
        int result = 0; 
        
        while (n > 999) {
            result += n - 999; 
            n /= 1000;
        }
        return result;
    }
};
