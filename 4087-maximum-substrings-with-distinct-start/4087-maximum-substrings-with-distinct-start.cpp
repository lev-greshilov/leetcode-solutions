class Solution {
public:
    int maxDistinct(string s) {
        std::unordered_set<char> distinct_chars;
        
        for (char c : s) {
            distinct_chars.insert(c);
        }
        
        return distinct_chars.size();
    }
};
