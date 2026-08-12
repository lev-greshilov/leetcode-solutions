#include <vector>
#include <algorithm> // ÐÐ»Ñ std::rotate Ð¸ std::reverse
#include <iostream>  // ÐÐ»Ñ ÑÑÐºÐ¾ÑÐµÐ½Ð¸Ñ Ð²Ð²Ð¾Ð´Ð°-Ð²ÑÐ²Ð¾Ð´Ð° LeetCode


class Solution {

public:
    void rotate(vector<int>& nums, int k) {
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



