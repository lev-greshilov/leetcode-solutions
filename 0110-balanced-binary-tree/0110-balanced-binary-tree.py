# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def height(node):
            """Returns subtree height to the furthest leaf, or -1 if it is unbalanced"""

            # Empty node is 0, return +1 to the parrent
            if not node:
                return 0

            # Check left and right branches
            left = height(node.left)
            if left == -1:
                return -1

            right = height(node.right)
            if right == -1:
                return -1

            # Check balance between two normal branches
            if abs(left - right) > 1:
                return -1   

            return max(left, right) + 1
            
        return height(root) != -1
            