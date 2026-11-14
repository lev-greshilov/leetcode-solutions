class Solution {
private:
    string getStringRange(int a, int b) {
        if (a == b) {
            return to_string(a);
        } else {
            return to_string(a) + "->" + to_string(b);
        }
    }

public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;

        if (nums.empty()) return result;

        int a = nums[0];
        int b = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i-1] + 1) {
                result.push_back(getStringRange(a, b)); 
                a = nums[i];
            }
            b = nums[i];
        }
        result.push_back(getStringRange(a, b));
        return result;
    }
};