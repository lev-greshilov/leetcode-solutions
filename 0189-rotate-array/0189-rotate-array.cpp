#include <vector>
#include <algorithm> 
#include <iostream>


class Solution {

public:
    void rotate(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);

        if (nums.empty()) {
            return;
        }

        // Normalize indexes
        int n = nums.size();
        k = k % n;

        // Idle if k = 0
        if (k == 0) {
            return;
        }

        // Find border between region A and region B for the Triple reversal algorithm.
        auto new_start_iterator = nums.begin() + (n - k);
        std::rotate(nums.begin(), new_start_iterator, nums.end());
    }
};



