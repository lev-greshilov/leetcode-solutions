class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n * 2);
        for (int i = 0; i < n ; i++) {
            result[i] = nums[i];
        }
        for (int i = 0; i < n ; i++) {
            result[n + i] = nums[(n - 1) - i];
        }

        return result;
    }
};
