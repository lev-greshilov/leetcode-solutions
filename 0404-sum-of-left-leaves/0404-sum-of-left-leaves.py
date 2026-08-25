# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:

        def fun(node: Optional[TreeNode], isLeft=False) -> int:
                
            # Empty node
            if not node:
                return 0
                   
            # Recursion
            summ = fun(node.left, isLeft=True) + fun(node.right)

            # Left Leaf
            if not node.left and not node.right and isLeft:
                summ += node.val

            # Pass the sum upper                
            return summ
            
        return fun(root)