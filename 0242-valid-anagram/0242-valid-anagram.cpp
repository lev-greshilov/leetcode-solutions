class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> freq_1;
        unordered_map <char, int> freq_2;
        
        for (char c : s) {
            freq_1[c]++;
        }
        for (char c : t) {
            freq_2[c]++;
        }
        
        return freq_1 == freq_2;
    }
};