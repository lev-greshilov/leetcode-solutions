# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int) -> bool:
        # Empty node
        if not root:
            return False


        current_sum = targetSum - root.val
        # End node
        isLeaf = not root.left and not root.right
        if isLeaf:
            return current_sum == 0
            
        # Recursion
        return (
            self.hasPathSum(root.left, current_sum)
            or self.hasPathSum(root.right, current_sum)
        ) 