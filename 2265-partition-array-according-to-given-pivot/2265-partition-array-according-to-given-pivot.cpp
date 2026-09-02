class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        std::vector<int> lesser_nums;
        std::vector<int> equal_nums;
        std::vector<int> greater_nums;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                lesser_nums.push_back(nums[i]);
            } else if (nums[i] > pivot) {
                greater_nums.push_back(nums[i]);
            } else { // equal
                equal_nums.push_back(nums[i]);
            }
        }
        lesser_nums.insert(lesser_nums.end(), equal_nums.begin(), equal_nums.end());
        lesser_nums.insert(lesser_nums.end(), greater_nums.begin(), greater_nums.end());

        return lesser_nums; 
    }
};