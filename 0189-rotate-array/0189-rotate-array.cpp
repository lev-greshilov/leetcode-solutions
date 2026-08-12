#include <iostream>
#include <vector>

class Solution {
private:
    void reverse_inplace(std::vector<int>& nums, int start, int end) {
        while (start < end) {
            std::swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }   
public:
    void rotate(vector<int>& nums, int k) {
        ///Honestly, I would like to use a ring buffer here instead of raw vector

        if (nums.empty()) return;
        int n = nums.size();
        k = k % n;
        if (k == 0) return;

        // Triple reversal algorithm. Region A = [0:n-k) region B = [n-k:n)
        reverse_inplace(nums, 0, n - 1); // 1. Reverse region A and region B together
        reverse_inplace(nums, 0, k - 1); // 2. Reverse region A separately 
        reverse_inplace(nums, k, n - 1); // 3. Reverse region B separately 
    }
};



