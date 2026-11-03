class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = ""; 

        while (columnNumber > 0) {
            int adjusted = columnNumber - 1;
            char c = 'A' + (adjusted % 26);
            result += c;
            columnNumber = adjusted / 26;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};