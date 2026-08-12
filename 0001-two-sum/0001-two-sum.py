class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = dict()
    
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen:
                return [seen[complement], i]   # Seen first
            #Always remember a new num in the hash map
            seen[num] = i
                    