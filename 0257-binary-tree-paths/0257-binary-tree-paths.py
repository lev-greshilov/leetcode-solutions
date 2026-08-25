# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        result = []

        def find_path(node, path):
            # Empty node
            if not node:
                return

            # First value without arrow
            if path:
                current_path = path + "->" + str(node.val)
            else:
                current_path = str(node.val)

            # Leaf node
            is_leaf = not node.left and not node.right
            if is_leaf:
                result.append(current_path)
                return

            # Recursion
            left_path = find_path(node.left, current_path)
            right_path = find_path(node.right, current_path)
        
        find_path(root, "")

        return result