# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        # Empty node
        if not root:
            return None

        # End node
        isLeaf = not root.left and not root.right
        if isLeaf:
            return TreeNode(root.val)
            
        # Recursion
        left = self.invertTree(root.left)
        right = self.invertTree(root.right)
        return TreeNode(val=root.val, left=right, right=left)
