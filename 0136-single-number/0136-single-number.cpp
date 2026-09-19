class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // x xor x = 0
        // x xor 0 = x
        int res = 0;

        for (int num : nums) {
            res = res ^ num; 
        }
        return res;
    }
};