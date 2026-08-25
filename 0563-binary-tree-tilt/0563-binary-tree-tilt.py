# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTilt(self, root: Optional[TreeNode]) -> int:
        total_tilt = 0
        
        def fun(node: Optional[TreeNode]) -> int:
            nonlocal total_tilt
            if not node:
                return 0

            left_sum = fun(node.left)
            right_sum = fun(node.right)

            tilt = abs(left_sum - right_sum)
            total_tilt += tilt

            return left_sum + right_sum + node.val
        
        fun(root)
        return total_tilt

