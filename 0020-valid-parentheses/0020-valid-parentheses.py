class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracket_map = {
            ")": "(",
            "}": "{",
            "]": "["
        }
        opening_brackets = set(bracket_map.values())
        closing_brackets = set(bracket_map.keys())

        for char in s:
            if char in opening_brackets:
                stack.append(char)
            elif char in closing_brackets:
                # get top element from stack
                top_element = stack.pop() if stack else None
                if bracket_map[char] != top_element:
                    return False  # wrong bracket type
        return len(stack) == 0
