# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        # None root or single root
        if not root.left and not root.right:
            return True
        
        return self.isMirror(root.left, root.right)
        
        
    def isMirror(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        # Empty node, symmetric
        if not p and not q:
            return True
        # Different structure => not symmetric
        # (not p and q) or (p and not q)
        elif not p or not q:
            return False
        return (
            p.val == q.val  # Instantly false without recursion
            and self.isMirror(p.left, q.right)
            and self.isMirror(p.right, q.left)
        )
