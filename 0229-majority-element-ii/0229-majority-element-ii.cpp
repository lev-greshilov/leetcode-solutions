class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int num : nums) {
            freq[num]++;
        }

        for (auto& [num, count] : freq) {
            if (count > nums.size() / 3) {
                result.insert(result.end(), num);
            }
        }

        return result;
    }
};