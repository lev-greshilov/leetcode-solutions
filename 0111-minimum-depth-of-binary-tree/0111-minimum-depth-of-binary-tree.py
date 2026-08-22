# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDepth(self, root: Optional[TreeNode]) -> int:
        # Empty node
        if not root:
            return 0

        # End node
        isLeaf = not root.left and not root.right
        if isLeaf:
            return 1
            
        # Count min only in TRUE (not-None) branches
        if root.left and not root.right:
            return self.minDepth(root.left) + 1
        elif root.right and not root.left:
            return self.minDepth(root.right) + 1
        else:
            return min(self.minDepth(root.left), self.minDepth(root.right)) + 1
