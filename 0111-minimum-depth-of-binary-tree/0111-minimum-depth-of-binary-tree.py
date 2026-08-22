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

        isLeft = root.left
        isRight = root.right
        # End node
        if not isLeft and not isRight:
            return 1
            
        # Count min only in TRUE (not-None) branches
        if isLeft and not isRight:
            return self.minDepth(root.left) + 1
        elif isRight and not isLeft:
            return self.minDepth(root.right) + 1
        else:
            return min(self.minDepth(root.left), self.minDepth(root.right)) + 1
