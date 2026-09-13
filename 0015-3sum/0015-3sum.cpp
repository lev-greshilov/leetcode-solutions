#include <unordered_map> 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // skip equal nums[i]
            if (i > 0 && nums[i] == nums[i-1]) { // short-circuit evaluation
                continue;
            }

            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum < 0 ) {
                    left++;
                } else if (sum > 0) {
                    right--;
                } else {
                    // Add triplet
                    result.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--; // sum = num[i](const) + nums[left] ()>left_prev), => right--

                    // skip equal nums[left]
                    while (left < right && nums[left] == nums[left-1]) {
                        left++;
                    }
                    // skip equal nums[right]
                    while (left < right && nums[right] == nums[right+1]) {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};