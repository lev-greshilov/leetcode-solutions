# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        if not root:
            return 0

        # Tree pruning
        if root.val < low:
            return self.rangeSumBST(root.right, low=low, high=high)
        if root.val > high:
            return self.rangeSumBST(root.left, low=low, high=high)
    
        return (
            self.rangeSumBST(root.left, low=low, high=high)
            + root.val
            + self.rangeSumBST(root.right, low=low, high=high)
        )