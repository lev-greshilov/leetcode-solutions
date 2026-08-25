# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:
        min_diff = 100001
        prev_val = None

        def inorder(node):
            nonlocal min_diff, prev_val
            if not node:
                return

            inorder(node.left)

            if prev_val is not None:
                min_diff = min(min_diff, node.val - prev_val)
            prev_val = node.val

            inorder(node.right)

        inorder(root)
        return min_diff