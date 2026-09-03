class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        std::vector<int> result(n * 2);
        for (int i = 0; i < n ; i++) {
            result[k++] = nums[i];
        }
        for (int i = n-1; i >= 0 ; i--) {
            result[k++] = nums[i];
        }

        return result;
    }
};
