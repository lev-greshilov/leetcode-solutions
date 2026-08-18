class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // nums which are not equal to val, slow pointer
        int k = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; 
                k++; 
            }
        }
    
        return k; 
    }
};