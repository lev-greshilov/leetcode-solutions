# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        # Empty node, same in both
        if not p and not q:
            return True
        # Different structure => not equal
        # (not p and q) or (p and not q)
        elif not p or not q:
            return False
        return (
            p.val == q.val  # Instantly false without recursion
            and self.isSameTree(p.left, q.left)
            and self.isSameTree(p.right, q.right)
        )

