class Solution:
    def longestCommonPrefix(self, strs: list[str]) -> str:
        sorted_words = sorted(strs)
        res = ""
        first_sorted_word = sorted_words[0]
        last_sorted_word = sorted_words[-1]
        for i in range(len(first_sorted_word)):
            if first_sorted_word[i] == last_sorted_word[i]:
                res += first_sorted_word[i]
            else:
                return res
        return res