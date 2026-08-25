# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        freq = {}

        def count_values(node):
            if not node:
                return

            number = node.val
            freq[number] = freq.get(number, 0) + 1
            
            count_values(node.left)
            count_values(node.right)
        

        count_values(root)
        max_freq = max(freq.values())
        # Generate list of modes based on the freq dictionary
        return [
            key
            for key, value in freq.items()
            if value == max_freq
        ]

