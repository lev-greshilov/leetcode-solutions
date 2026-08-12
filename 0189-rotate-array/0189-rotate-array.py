class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # Honestly, I would like to use a ring buffer here instead of raw vector
        
        # Normalize indexes
        n = len(nums)
        k = k % n 
        
        # Triple reversal algorithm.
        nums[:] = nums[-k:] + nums[:-k]