class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int n = s.size();
        int ans = 0;

        unordered_set<char> st;

        int left = 0;
        int right = 0;

        for (right = 0; right < n; right++) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
