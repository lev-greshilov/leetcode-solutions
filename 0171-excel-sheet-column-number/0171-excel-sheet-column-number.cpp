class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        uint k = 1;
        
        for (int i = columnTitle.size() - 1; i >= 0; i--) {
            char c = columnTitle[i];
            result += (c - 'A' + 1) * k;
            k *= 26;
        }
        return result;
    };
};