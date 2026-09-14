class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int max = 0;

        for (int i = 0; i < s.size(); i++) {
            std::string current_s = "";
            int j = i;
            
            while (j < s.size()) {
                if (current_s.find(s[j]) != std::string::npos) {
                    break;
                } else {
                    current_s += s[j];
                    if (max < current_s.size()) {
                        max = current_s.size();
                    }
                }
                j++;
            }
        }
        return max;
    }
};